#include <stdio.h>
#define CANTIDAD_ELEMENTOS 10
int main()
{
    int vector[CANTIDAD_ELEMENTOS] = {5, 3, 2, 6, 1, 9, 10, 33, 30, 4};
    int temp;
    int count = 0;
    int first = 0;
    /*Ordenamiento*/
    while (first < CANTIDAD_ELEMENTOS)
    {
        count = first + 1; // Siguiente elemento de la array

        while (count < CANTIDAD_ELEMENTOS)
        {
            if(vector[first] > vector[count])
            {
                temp = vector[first];
                vector[first] = vector[count];
                vector[count] = temp;
            }
            count ++;
        }
        first++;
    }
    /*Print en pantalla*/
    for (int i = 0;i < 10;i++)
    {
        printf("Position %d\t//\t%d\n", i + 1, vector[i]);
    }
    return 0;
}
