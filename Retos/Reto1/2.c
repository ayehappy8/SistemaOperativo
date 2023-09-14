#include <stdio.h>
#include <string.h>
int main()
{
    char nombres [5][10];

        for (int i = 0; i < 5; i++)
    {
        printf("Ingrese nombre n%d \n", i+1);
        scanf("%s \n", nombres[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Nombre n %d \n %s \n", i+1, nombres[i]);
    }
    
    
    return 0;
}
