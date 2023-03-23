#include <stdio.h>
// CalculoDelSalarioConSeguroEducativo

int main()
{
    // Bloque de declarativas de constantes
    #define DESCUENTO 0.0125
    // Bloque de declarativas de variables
    // Variables de entrada
    float salario;
    // Variables de salida
    float descuento1, salarioFinal;
    // Bloque de instrucciones
    printf("Introduzca el salario bruto: B/");
    scanf("%f",&salario);
        
    // Se calcula el salario descontado
   
    descuento1 = salario * DESCUENTO;
    printf("\n El descuento es = B/%.2f", descuento1);
    salarioFinal = salario - descuento1;
    printf("\n El salario descontado es = B/%.2f", salarioFinal);
    
    return 0;
}