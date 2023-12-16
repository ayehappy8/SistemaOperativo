#include <stdio.h>
#include <math.h>
int main(){
    int lado1, lado2, lado3 = 0;
    double perimetro, semiperimetro, area;
    printf("Ingrese las medidas de los lados\n");
    printf("lado 1\n");
    scanf("%d",&lado1);
    printf("lado 2\n");
    scanf("%d",&lado2);
    printf("lado 3\n");
    scanf("%d",&lado3);

    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
    
    perimetro =lado1 + lado2 + lado3; 
    printf("perimetro \t %.0lf\n", perimetro);
    semiperimetro = (perimetro) / 2;
    printf("semiperimetro \t %.1lf\n", semiperimetro);
    area = sqrt(semiperimetro * (semiperimetro - lado1)*(semiperimetro-lado2)*(semiperimetro-lado3)); 
    printf("area \t %.1lf\n", area);
    }else{
        printf("Invalido");
    }

    
    return 0;
}