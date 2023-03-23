#include <stdio.h>
// Calificaciones2
/* Entrada: Calificaciones
   Proceso: Acumular y calcular el promedio de cada estudiante
   Salida: Promedio de las calificaciones de cada estudiante
*/

int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    float jonathanSalazar, total2, calificacion[4][3];
    int x, y;
    // Bloque de instrucciones
    
    printf("Calcular el promedio de 4 estudiantes\n");
    
        // Establecemos la iteración que registra las calificaciones
        for(x=0;x<=3;x=x+1)
            {
                printf("\nIngrese las calificaciones para el estudiante %d\n", x+1);
                
                for(y=0;y<=2;y=y+1)
                {
                    printf("\nCalificación número %d: ", y + 1);
                    scanf("%f",&calificacion[x][y]);
                }
                
                printf("\n");
            }
        
        // Calculamos el promedio de las calificaciones
        for(x=0;x<=3;x=x+1)
        {
            // Se inician los acumuladores en cero cada vez que se calcula el promedio de otro estudiante
            jonathanSalazar = 0;
            total2 = 0;
            
            for(y=0;y<=2;y=y+1)
            {
                jonathanSalazar = jonathanSalazar + calificacion[x][y]; // Se almacenan las tres calificaciones del estudiante
            }
            
            // Se determina el promedio de las calificaciones de ese estudiante
            total2 = jonathanSalazar / 3;
            
            // Estructura que decide que letra ha obtenido el estudiante
            if (total2 <= 60)
            {
                printf("El estudiante %d ha obtenido una F y su promedio es: %.2f\n", x + 1, total2);
            }
            
            else if (total2 >= 61 && total2 <= 70)
            {
                printf("El estudiante %d ha obtenido una D y su promedio es: %.2f\n", x + 1, total2);
            }
            
            else if (total2 >= 71 && total2 <= 80)
            {
                printf("El estudiante %d ha obtenido una C y su promedio es: %.2f\n", x + 1, total2);
            }
            
            else if (total2 >= 81 && total2 <= 90)
            {
                printf("El estudiante %d ha obtenido una B y su promedio es: %.2f\n", x + 1, total2);
            }
            
            else if (total2 >= 91 && total2 <= 100)
            {
                printf("El estudiante %d ha obtenido una A y su promedio es: %.2f\n", x + 1, total2);
            }
            
        }
        
        // Impresión de nombre, cédula y grupo
        printf("\n Nombre: Jonathan Salazar\n Cédula: 3-747-2358\n Grupo: 1SF 112 ");
    
  return 0;
} 