#include <stdio.h>
#include <math.h>

int main(){
    
    float cateto1, cateto2, hipo, area, perimetro;
    /*sqrt(4) pow()*/
    printf("Ingrese cateto 1\n");
    scanf("%f", &cateto1);
    printf("Ingrese cateto 2\n");
    scanf("%f", &cateto2);

    hipo = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    area = ((cateto1*cateto2)/2);
    perimetro = hipo + cateto1 + cateto2;

    printf("Hipotenusa:\t %.1f\n", hipo);
    printf("Area:\t %.1f\n", area);
    printf("Perimetro:\t %.1f\n", perimetro);
    return 0;
}