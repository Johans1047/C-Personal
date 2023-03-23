#include <stdio.h>
// Promedio

int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    float nota1, nota2, nota3, nota4, nota5;
    // Variable de salida
    float promedio;
    // Bloque de instrucciones
    printf("Introduzca la primera calificación:");
    scanf("%f",&nota1);
    printf("Introduzca la segunda calificación:");
    scanf("%f",&nota2);
    printf("Introduzca la tercera calificación:");
    scanf("%f",&nota3);
    printf("Introduzca la cuarta calificación:");
    scanf("%f",&nota4);
    printf("Introduzca la quinta calificación:");
    scanf("%f",&nota5);
    
    // Se calcula el promedio
    
    promedio = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
    printf("El promedio es = %.2f", promedio);

    return 0;
}
