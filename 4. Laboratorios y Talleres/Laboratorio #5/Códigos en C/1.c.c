#include <stdio.h>
// Porcentajes
/* Entrada: Precio de los productos
   Proceso: Calcular el porcentaje de los productos con un costo mayor a 50
   Salida: Porcentaje de productos mayores a 50
*/

int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    float porcentaje, total, jonathanSalazar[10];
    int contador;
    // Bloque de instrucciones
    
    printf("Calcular el porcentaje de 10 precios\n");
    
        // Establecemos la iteración que registra los precios
        for(contador=0;contador<=9;contador=contador+1)
            {
                printf("\nIngrese el precio del producto %d: ", contador + 1);
                scanf("%f",&jonathanSalazar[contador]);
            }
            
        for(contador=0;contador<=9;contador=contador+1)
            {
                if (jonathanSalazar[contador] > 50)
                    {
                         total = total + 1; // Colocamos el contador de los precios mayores a 50
                    }
            }
        
        
            // Calculamos el porcentaje de los precios mayores a 50
            porcentaje = (total*100) / 10;
            printf("\nEl porcentaje de los precios mayores a 50 es: %.2f \n", porcentaje);
            
            // Impresión de nombre, cédula y grupo
            printf("\n Nombre: Jonathan Salazar\n Cédula: 3-747-2358\n Grupo: 1SF 112 ");
    
  return 0;
} 