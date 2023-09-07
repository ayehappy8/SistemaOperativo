#include <stdio.h>
int main()
{
    char palabra[16];
    
    printf("ingrese palabra\n"); 
    scanf("%s", &palabra);
    printf("La palabra es %s", palabra); 
    int count = strlen(palabra);
     char inverso[count];
    for (int i = count -1; 0 <= i; i--)
    {
         printf("La palabra tiene %d\n", i); 
        for (int j = 0; j <=count-1; j++)
        {
            printf("La le quita %d\n", j);
            if (j!=i)
            {
                inverso[j] = palabra[i];
            }   
        }      
    }
    printf("inverso %s\n", inverso);
    printf("La palabra tiene %d", count); 
    return 0;
}