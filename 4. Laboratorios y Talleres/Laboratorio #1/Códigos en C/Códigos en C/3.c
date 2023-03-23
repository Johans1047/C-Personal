#include <stdio.h>
// CalculoDelTotal

int main()
{
    // Bloque de declarativas de constantes
    #define IMPUESTO 0.07
    // Bloque de declarativas de variables
    // Variables de entrada
    float producto1, producto2;
    // Variable de salida
    float total;
    // Bloque de instrucciones
    printf("Introduzca el precio del primer producto: B/");
    scanf("%f",&producto1);
    printf("Introduzca el precio del segundo producto: B/");
    scanf("%f",&producto2);
        
    // Se calcula el total a pagar
   
    total = (producto1 + producto2) + ((producto1 + producto2)*(IMPUESTO));
    printf("\n El total es = B/%.2f", total);

    return 0;
}