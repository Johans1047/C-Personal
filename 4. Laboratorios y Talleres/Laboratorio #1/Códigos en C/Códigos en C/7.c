#include <stdio.h>
// CalculoDelImpuestoYDelTotal

int main()
{
    // Bloque de declarativas de constantes 
    #define IMPUESTO 0.07
    // Bloque de declarativas de variables
    // Variables de entrada
    float producto;
    // Variable de salida
    float totalImpuesto, totalFinal;
    // Bloque de instrucciones
    printf("Introduzca el precio del producto: B/");
    scanf("%f",&producto);
        
    // Se calcula el total a pagar
   
    totalImpuesto = producto * IMPUESTO;
    printf("\n El impuesto del producto es = %.2f", totalImpuesto);
    totalFinal = producto + totalImpuesto;
    printf("\n El precio final es = %.2f", totalFinal);
    
    return 0;
}