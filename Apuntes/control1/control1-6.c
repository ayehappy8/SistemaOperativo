#include<stdio.h>

int main(){
    float notas[3], promedioP;
    int i = 0;
    while (i<3){
        printf("Ingrese las nota n%d\n",i+1);
        scanf("%f", &notas[i]);
        if(notas[i] >=1 && notas[i] <= 7){
            i++;
        }else{
            printf("Ingrese la nota nuvamente\n");
        }
    }

    promedioP = (notas[0]*0.4)+(notas[1]*0.3)+(notas[2]*0.3);
    printf("Promedio ponderado es %.2f\n", promedioP);
    if(promedioP <= 3.95){
        printf("Reprovaste la asignatura\n");
    }else if(promedioP >= 3.95 && promedioP <= 4.94){
        printf("Examen \n");
    }else{
        printf("Aprobaste\n");
    }


    return 0;
}