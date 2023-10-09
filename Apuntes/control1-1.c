#include <stdio.h>
    int main(){

    int contador = 200;
    int total = 0;
    int prueba =0;
    for(int i = 0; i <= contador; i++){
        if(i % 2 != 0){
            printf("impar\t  %d \n", i);
            total = total + i;
            prueba++;
        }
    }
    printf("cantida %d", prueba);

    return 0;
    }