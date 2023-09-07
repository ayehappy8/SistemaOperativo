#include <stdio.h>
int main()
{
    char palabra[16];
    
    printf("ingrese palabra\n"); 
    scanf("%s", &palabra);
    printf("La palabra es %s", palabra); 
    int count = strlen(palabra);
     char inverso[count];
    for (int i = count; 0 <= i; i--)
    {

        for (int j = 0; j <= count; j++)
        {
            printf("palabra %c\n", inverso[i]);
            printf("inverso %c\n", inverso[j]);
           inverso[j] = palabra[i];
        }      
    }
    printf("inverso %s\n", inverso);
    printf("La palabra tiene %d", count); 
    return 0;
}