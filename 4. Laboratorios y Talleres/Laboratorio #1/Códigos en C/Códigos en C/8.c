#include <stdio.h>
// CalculoDelSalario

int main()
{
    // Bloque de declarativas de variables
    // Variable de entrada
    float pago;
    // Variables de salida
    float salarioSemanal, salario;
    // Bloque de instrucciones
    printf("Introduzca el pago por hora: B/");
    scanf("%f",&pago);
    
    // Se calcula el salario semanal y mensual
   
    salarioSemanal = pago * 45;
    printf("\n El salario semanal es = B/%.2f", salarioSemanal);
    salario = salarioSemanal * 4;
    printf("\n El salario mensual es = B/%.2f", salario);
    
    return 0;
}
