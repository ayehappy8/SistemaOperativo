#include <stdio.h>
#include <string.h>
int main()
{
    char nombres [5][10]={"Pedro", "Sebastian", "Jose", "Leandro", "Dieter"};
    for (int i = 0; i < 5; i++)
    {
        printf("Nombre n %d \n %s \n", i+1, nombres[i]);
    }
    
    
    return 0;
}
