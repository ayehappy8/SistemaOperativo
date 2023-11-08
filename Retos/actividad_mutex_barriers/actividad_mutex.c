#include <stdio.h>
#include <time.h>
#include <pthread.h>
#include <stdlib.h>

#define NUMTHREAD 3;
int recurso = 5;

pthread_mutex_t mutexg;
pthread_barrier_t barrera;

    void *Hilos()
    {
        pthread_mutex_lock(&mutexg);
        pthread_t id = pthread_self();

        printf("hilo %lu ingreso al recurso compartido\n", id);

        recurso = (recurso + 5) * 2;

        printf("hilo %lu realizando operacion Resultado operacion:\t%d\n", id ,recurso);

        printf("hilo %lu salio del recurso compartido\n", id);

        pthread_mutex_unlock(&mutexg);
        pthread_barrier_wait(&barrera);
        
        printf("hilo %lu termino su espera\n", id);

        return NULL;
    }

    int main()
{
    pthread_t th1, th2, th3;
    pthread_mutex_init(&mutexg, NULL);
    pthread_barrier_init(&barrera, NULL, 3);
    pthread_create(&th1, NULL, Hilos, NULL);
    pthread_create(&th2, NULL, Hilos, NULL);
    pthread_create(&th3, NULL, Hilos, NULL);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    pthread_join(th3, NULL);

    pthread_mutex_destroy(&mutexg);
    pthread_barrier_destroy(&barrera);
    
    return 0;

}