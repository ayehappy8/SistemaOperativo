#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[50];
    char palabra_invertida[50];
    printf("Ingrese la palabra\n");
    scanf("%s",&palabra);
    int longitud = strlen(palabra);
    for (int i = longitud - 1; i >= 0; i--)
    {
        palabra_invertida[(longitud-1)-i] = palabra[i];

    }
    for (int i = 0;i <=longitud-1;i++)
    {
        if(palabra[i] != palabra_invertida[i])
        {
            printf("No es un palindromo\n"); 
            return 1;
        }
    }
    printf("Es un palindromo\n"); 
    return 0;
}