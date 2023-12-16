#include <stdio.h>

int main(){
    int lado1, lado2, lado3 = 0;
    printf("Ingrese las medidas de los lados\n");
    printf("lado 1\n");
    scanf("%d",&lado1);
    printf("lado 2\n");
    scanf("%d",&lado2);
    printf("lado 3\n");
    scanf("%d",&lado3);

    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){

    
    if(lado1 == lado2 && lado1 == lado3){
        printf("Es equilatero");
    }
    else if(lado1 != lado2 && lado1 != lado3){
        printf("Es escaleno");
    }else{
        printf("Es isoseles");
    }
    }else{
        printf("Invalido");
    }
    return 0;
}