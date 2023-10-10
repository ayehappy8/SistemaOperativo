#include <stdio.h>


int main(){

    char textoNormal[4] = "casa";
    char textoInverso[5];

    
    for(int i = 0; i < 4; i++){

        textoInverso[4-(i+1)] = textoNormal[i];
    }
    printf("El texto inverso es %s\n", textoInverso);

}