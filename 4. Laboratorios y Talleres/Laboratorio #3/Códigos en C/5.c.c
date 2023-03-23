#include <stdio.h>

int main()
{
    //Bloque Declarativas de variables
    float acum, precioProducto, precioImpuesto, precioTotal;
    int i;
    //Bloque de instrucciones
    i=-1;
    acum=0;
    do
    {
        i++;
        printf("Digite el precio del producto (Introduzca el valor 0 para finalizar el proceso): ");
        scanf("%f", &precioProducto);
        acum=acum+precioProducto;
        
    } while (precioProducto>0);
    precioImpuesto=acum*0.07;
    precioTotal=precioImpuesto+acum;
    printf("Total acumulado: %.2f \n", acum);
    printf("Cantidad de productos: %d \n", i);
    printf("Valor del impuesto: %.2f \n", precioImpuesto);
    printf("Total a pagar: %.2f \n", precioTotal);
    return 0;
}