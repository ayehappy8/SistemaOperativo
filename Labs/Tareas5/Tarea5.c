#include <stdio.h>

int main() {
    int c_procesos, bloques, i;
    printf("Ingrese el número de procesos:");
    scanf("%d", &c_procesos);

    int process[c_procesos];
    printf("\nIngrese el tamaño de los procesos:\n");
    for (i = 0; i < c_procesos; i++) {
        scanf("%d", &process[i]);
    }

    printf("Ingrese el número de bloques de memoria:");
    scanf("%d", &bloques);

    int blocks[bloques];
    printf("\nIngrese el tamaño de los bloques de memoria:\n");
    
    int total = 0;
    for (i = 0; i < bloques; i++) {
        scanf("%d", &blocks[i]);
        total = total + blocks[i];
    }

    int process1[bloques];
    int job[bloques];
    int frag[bloques];
    int check[bloques];

    for (i = 0; i < bloques; i++) {
        check[i] = 0;
    }

    int j, used = 0;
    i = 0;

    while (i < c_procesos) {
        int max = -1, j1 = -1, k = -1, max1;
        for (j = 0; j < bloques; j++) {
            max1 = blocks[j];
            if (max1 >= max && check[j] == 0 && max1 >= process[i]) {
                max = max1;
                j1 = j;
            } else {
                if (check[j] == 0) {
                    process1[j] = 0;
                    job[j] = 0;
                    frag[j] = blocks[j];
                }
            }
        }
        if (k != j1) {
            process1[j1] = process[i];
            job[j1] = i + 1;
            frag[j1] = blocks[j1] - process[i];
            used = used + process[i];
            check[j1] = 1;
            int l;
        }
        i++;
    }

    printf("Tamaño del bloque\tTamaño del proceso\tNúmero de proceso\tFragmentación\n");
    for (i = 0; i < bloques; i++) {
        printf("%d\t\t\t%d\t\t\t%d\t\t\t%d\n", blocks[i], process1[i], job[i], frag[i]);
    }

    printf("Total de asignación de memoria:%d\n", total);
    printf("Memoria utilizada:%d\n", used);

    return 0;
}
