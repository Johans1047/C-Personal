#include <stdio.h>
// Litros

int main()
{
    // Bloque de declarativas de variables
    // Variable de entrada
    float galones;
    // Variable de salida
    float litros;
    // Bloque de instrucciones
    printf("Introduzca el volumen en galones:");
    scanf("%f",&galones);
    
    // Se calcula el volumen en litros
   
    litros = galones * 3.785;
    printf("\n El volumen en litros es = %.2f", litros);

    return 0;
}
