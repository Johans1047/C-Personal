#include <stdio.h>
// Calificaciones
/* Entrada: Calificaciones
   Proceso: Acumular y calcular el promedio de las calificaciones
   Salida: Promedio de las calificaciones
*/

int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    float promedio, total, jonathanSalazar[10];
    int contador;
    // Bloque de instrucciones
    
    printf("Calcular el promedio de 10 calificaciones\n");
    
        // Establecemos la iteración que registra las calificaciones
        for(contador=0;contador<=9;contador=contador+1)
            {
                printf("\nIngrese la calificación %d: ", contador + 1);
                scanf("%f",&jonathanSalazar[contador]);
            }
            
        for(contador=0;contador<=9;contador=contador+1)
            {
                total = total + jonathanSalazar[contador]; // Colocamos el acumulador de las calificaciones
            }
        
            // Calculamos el promedio de las calificaciones
            promedio = total / 10;
            printf("\nEl promedio de las calificaciones es: %.2f \n", promedio);
            
            // Impresión de nombre, cédula y grupo
            printf("\n Nombre: Jonathan Salazar\n Cédula: 3-747-2358\n Grupo: 1SF 112 ");
    
  return 0;
}