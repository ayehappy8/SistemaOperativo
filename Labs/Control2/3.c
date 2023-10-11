#include <stdio.h>

int main(){
    int n =0;
    int numeroI;
    int pares =0;
    int impares = 0;

    while(n < 1){
        printf("ingrese un numero\n");
        scanf("%d", &numeroI);
        if(numeroI <= 0){
            printf("numero negativo termino el proceso %d\n", numeroI);
            n++;
        }
        else if(numeroI % 2 == 0){
            printf("es par %d\n", numeroI);
            pares++;
        }else if(numeroI % 2 != 0){
            printf("es impar %d\n", numeroI);
            impares++;
    }
    printf("Total pares \t %d\n", pares);
    printf("Total pares \t %d\n", impares);
}
}