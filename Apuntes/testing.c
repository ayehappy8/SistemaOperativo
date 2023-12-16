#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

// Definir la estructura del monitor para gestionar el acceso a cada túnel
typedef struct {
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int ocupado;
} TunnelMonitor;

// Arreglo de monitores, uno por cada túnel
TunnelMonitor tunnels[3];

// Función para inicializar un monitor
void init_monitor(TunnelMonitor *monitor) {
    pthread_mutex_init(&monitor->mutex, NULL);
    pthread_cond_init(&monitor->cond, NULL);
    monitor->ocupado = 0;
}

// Función para entrar a un túnel específico
void enter_tunnel(int tunnel_id, int car_id) {
    pthread_mutex_lock(&tunnels[tunnel_id].mutex);

    while (tunnels[tunnel_id].ocupado) {
        pthread_cond_wait(&tunnels[tunnel_id].cond, &tunnels[tunnel_id].mutex);
    }

    tunnels[tunnel_id].ocupado = 1;
    printf("Automóvil %d entra al túnel %d.\n", car_id, tunnel_id + 1);

    pthread_mutex_unlock(&tunnels[tunnel_id].mutex);
}

// Función para salir de un túnel específico
void exit_tunnel(int tunnel_id, int car_id) {
    pthread_mutex_lock(&tunnels[tunnel_id].mutex);

    tunnels[tunnel_id].ocupado = 0;
    printf("Automóvil %d sale del túnel %d.\n", car_id, tunnel_id + 1);

    pthread_cond_signal(&tunnels[tunnel_id].cond);
    pthread_mutex_unlock(&tunnels[tunnel_id].mutex);
}

// Función ejecutada por cada hilo de automóvil
void *car_thread(void *arg) {
    int car_id = *((int *)arg);

    // Simulación de acceso a los tres túneles
    for (int i = 0; i < 3; ++i) {
        enter_tunnel(i, car_id);

        // Simulación de tiempo en el túnel
        sleep(2);

        exit_tunnel(i, car_id);
    }

    pthread_exit(NULL);
}

int main() {
    const int num_cars = 5;
    pthread_t cars[num_cars];
    int car_ids[num_cars];

    // Inicializar los monitores para los tres túneles
    for (int i = 0; i < 3; ++i) {
        init_monitor(&tunnels[i]);
    }

    // Crear hilos de automóviles
    for (int i = 0; i < num_cars; ++i) {
        car_ids[i] = i + 1;
        pthread_create(&cars[i], NULL, car_thread, &car_ids[i]);
    }

    // Esperar a que todos los hilos terminen
    for (int i = 0; i < num_cars; ++i) {
        pthread_join(cars[i], NULL);
    }

    // Destruir los monitores
    for (int i = 0; i < 3; ++i) {
        pthread_mutex_destroy(&tunnels[i].mutex);
        pthread_cond_destroy(&tunnels[i].cond);
    }

    return 0;
}
