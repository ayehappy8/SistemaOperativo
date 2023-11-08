#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    pid_t pidC;
    printf("proceso pid comienzo %d\n",getpid());
    pidC = fork();
    printf("proceso pid ejecutandose %d, pidc = %d\n",getpid(), pidC);

    if (pidC > 0)
    {
        printf("Es el padre\n");
    }else if (pidC == 0)
    {
        printf("Es el hijo\n");
    }
    return 0;

    }
