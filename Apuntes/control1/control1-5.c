#include <stdio.h>

int main(){
    float notas[4];
    int i = 0;
    float promedio;
    while(i<4){
        printf("ingrese nota %d\n",i+1);
        scanf("%f",&notas[i]);
        if(notas[i] > 0 && notas[i] <= 7 ){
            i++;
        }else{
           printf("Nota invalida\n");
    }
}
    promedio = (notas[0] + notas[1] + notas[2] + notas[3])/4;
    printf("promedip %.1f\n",promedio);
}