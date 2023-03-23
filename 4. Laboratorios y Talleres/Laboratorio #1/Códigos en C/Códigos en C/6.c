#include <stdio.h>
// Renminbi

int main()
{
    // Bloque de declarativas de variables
    // Variable de entrada
    float dolares;
    // Variable de salida
    float renminbi;
    // Bloque de instrucciones
    printf("Introduzca la cantidad de dólares a transformar: B/");
    scanf("%f",&dolares);
        
    // Se calcula la cantidad en la moneda renminbi
   
    renminbi = dolares * 6.45;
    printf("\n El dinero en renminbi es = %.2f", renminbi);
    
    return 0;
}
