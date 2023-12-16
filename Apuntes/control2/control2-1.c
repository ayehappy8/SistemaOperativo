#include <stdio.h>
#include <string.h>
int main(){
    int repetidas = 0;
    char frase[50];
    char letra;

    printf("Ingrese una frase\n");
    fgets(frase, sizeof(frase), stdin);
    printf("Ingrese la letra que quiera saber cuantas hay en el texto\n");
    scanf(" %c", &letra); /*En esta linea recibia el caracter del enter entonces necesitaba un espacio adelante*/
    for(int i = 0; i < strlen(frase); i++){
        printf("estamos en la letra %c\n", frase[i]);
        if(frase[i]==letra){
            repetidas++;
        }
    }
    printf("La letra %c se repite %d veces\n", letra, repetidas);
    return 0;    
}