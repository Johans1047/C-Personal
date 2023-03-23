#include <stdio.h>
// Celsius

int main()
{
    // Bloque de declarativas de variables
    // Variable de entrada
    float fahrenheit;
    // Variable de salida
    float celsius;
    // Bloque de instrucciones
    printf("Introduzca la temperatura en fahrenheit:");
    scanf("%f",&fahrenheit);
    
    // Se calcula la temperatura en celsius
   
    celsius = ((fahrenheit - 32) * (5))/ 9;
    printf("La temperatura en celsius es = %.2f", celsius);

    return 0;
}
