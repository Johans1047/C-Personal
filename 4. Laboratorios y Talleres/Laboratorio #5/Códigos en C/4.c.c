#include <stdio.h>
// Valores
/* Entrada: Valores numéricos
   Proceso: Almacenar valores numéricos y ordenarlos de menor a mayor
   Salida: Valores numéricos de menor a mayor
*/

int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    int jonathanSalazar[10];
    int aux, x, y;
    // Bloque de instrucciones
    
    printf("Ordenar 10 valores numéricos de menor a mayor\n");
    
        // Establecemos la iteración que registra los valores numéricos
        for(x=0;x<=9;x=x+1)
            {
                printf("\nIngrese el valor numérico %d: ", x + 1);
                printf("\n");
                scanf("%d",&jonathanSalazar[x]);
            }
        
        // Creamos una estructura anidada que organiza los números de menor a mayor
        for(x=0;x<=9;x=x+1)
            {
                for(y=0;y<=9;y=y+1)
                {
                    if (jonathanSalazar[y] > jonathanSalazar[y+1])
                    {   
                        aux = jonathanSalazar[y+1];
                        jonathanSalazar[y+1] = jonathanSalazar[y];
                        jonathanSalazar[y] = aux;
                    }
                
                }
        
            }
        
        // Una vez con los números ordenados, los imprimimos    
        for(x=0;x<=9;x=x+1)
        {
            printf("%d\t", jonathanSalazar[x]);
        }
            
        // Impresión de nombre, cédula y grupo
        printf("\n\n Nombre: Jonathan Salazar\n Cédula: 3-747-2358\n Grupo: 1SF 112 ");
    
  return 0;
}