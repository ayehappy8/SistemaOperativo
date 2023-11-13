/*Se tienen tres procesos A, B y C. Desarrollar un código
utilizando semáforos de manera tal, que la secuencia de
salida sea ABC,ABC,ABC.*/
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <semaphore.h>

#define NUM_THEREADS 3
#define SECUNCIA 3

sem_t semaforoA, semaforoB, semaforoC;

void *procesoA()
{

    for (int i = 0; i < SECUNCIA ; i++)
    {
        sem_wait(&semaforoA);
        printf("A");
        printf(",");
        sem_post(&semaforoC);
    }
    
    pthread_exit(NULL);
};

void *procesoB()
{

    for (int i = 0; i < SECUNCIA ; i++)
    {
        sem_wait(&semaforoB);
        printf("B");
        sem_post(&semaforoA);
    }

    pthread_exit(NULL);
};

void *procesoC()
{

    for (int i = 0; i < SECUNCIA ; i++)
    {
        sem_wait(&semaforoC);
        printf("C");
        sem_post(&semaforoB);
    }

    pthread_exit(NULL);
};

int main()
{
    pthread_t hilos[NUM_THEREADS];
    void *(*procesos[NUM_THEREADS])(void *) ={procesoA, procesoB, procesoC}; 
    int hilos_id[NUM_THEREADS];
    
    
    sem_init(&semaforoA, 0, 0);
    sem_init(&semaforoB, 0, 0);
    sem_init(&semaforoC, 0, 1);


    //creation of threads
    for (int i = 0; i < NUM_THEREADS; i++)
    {
       hilos_id[i] = i + 1;
       pthread_create(&hilos[i], NULL, procesos[i],NULL);
    }
    //join of thereads
    for (int i = 0; i < NUM_THEREADS; i++)
    {
        pthread_join(hilos[i], NULL);
    }
    
    sem_destroy(&semaforoA);
    sem_destroy(&semaforoB);
    sem_destroy(&semaforoC);


    return 0;
}


