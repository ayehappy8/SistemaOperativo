#include <stdio.h>

    struct Productos{
        int codigo;
        int precio;
        char descripcion[30];
    };

    void imprimirProducto(struct Productos producto){
    printf("Descripcion:%s\n", producto.descripcion);   
    printf("codigo:\t%d\n", producto.codigo);
    printf("Precio:\t%d\n", producto.precio);
    }
int main(){

    struct Productos vaso = {1,1000, "vaso"};
    struct Productos chocolate = {2,2500, "chocoloate"};

    if(vaso.precio > chocolate.precio) imprimirProducto(vaso); else imprimirProducto(chocolate);

    return 0;
}