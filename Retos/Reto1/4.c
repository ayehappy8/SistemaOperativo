#include <stdio.h>

int main()
{
    int matriz[2][2];
    int matriz2[2][2];
    int matrizFinal[2][2];

        for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 2; j++)
        {
                printf("Ingrese numero para la matriz 1\n");
                scanf("%d", &matriz[i][j]);
        }
    }
        for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 2; j++)
        {
                printf("Ingrese numero para la matriz 2\n");
                scanf("%d", &matriz2[i][j]);
        }
    }
    printf("Matriz final\n");
        for (int i = 0; i < 2; i++)
    {
            for (int j = 0; j < 2; j++)
        {
                matrizFinal[i][j] = matriz[i][j] + matriz2[i][j];
                
                printf("[%d]\t",matrizFinal[i][j]);
        }
        printf("\n");
    }

    return 0;
}