#include <stdio.h>
// Valores
/* Entrada: Crear una matriz con los valores (1) y (4), no hay datos de entrada
   Proceso: Almacenar los valores de la matriz en el orden correcto
   Salida: imprimir la matriz
*/

int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    int jonathanSalazar[11][21];
    int x, y, a, b;
    
    // Bloque de instrucciones
    a = 10;
    b = 10;// La cantidad de números que no son ´4´ en la primera fila es 20, por lo tanto serán 10 por cada lado, de esta manera
           // podemos colocarnos en la posición 10 (número 11)
           
    printf("Imprimir valores en forma de triángulo\n\n");
    
        // Introducimos los valores correspondientes para la matriz
        for(x=0;x<=10;x=x+1)
            {
                
                for(y=0;y<=20;y=y+1)
                {
                  if (y<=a && y >=b)
                  {
                      jonathanSalazar[x][y] = 4;
                  }
                  
                  else 
                  {
                      jonathanSalazar[x][y] = 1;
                  }
                  
                    
                }
                
                a = a + 1;
                b = b - 1; 
                   
            }
            
        // Imprimimos la matriz
        for(x=0;x<=10;x=x+1) 
          {
             for(y=0;y<=20;y=y+1)
                {
                    printf("%d",jonathanSalazar[x][y]);
                }
                
             printf("\n"); // Añadimos un salto de línea para que la matriz tenga una forna adecuada
           }    
        
        // Impresión de nombre, cédula y grupo
        printf("\n Nombre: Jonathan Salazar\n Cédula: 3-747-2358\n Grupo: 1SF 112 ");
    
  return 0;
}