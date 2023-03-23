#include <stdio.h>
// CalculoDelDescuento

int main()
{
    // Bloque de declarativas de constantes 
    #define DESCUENTO 0.25
    // Bloque de declarativas de variables
    // Variables de entrada
    float producto;
    // Variable de salida
    float total, totalDescuento, totalFinal;
    // Bloque de instrucciones
    printf("Introduzca el precio del producto: B/");
    scanf("%f",&producto);
    
    // Se calcula el total a pagar
   
    total = producto;
    printf("\n El precio inicial es = B/%.2f", total);
    totalDescuento = producto * DESCUENTO;
    printf("\n El descuento es = B/%.2f", totalDescuento);
    totalFinal = total - totalDescuento;
    printf("\n El precio final es = B/%.2f", totalFinal);

    return 0;
}
