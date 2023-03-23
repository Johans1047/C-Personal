#include <stdio.h>
// Salario
/* Entrada: Salario bruto del empleado
   Proceso: Calcular el salario neto del empleado
   Salida: Salario neto del empleado
*/

// Función que calcula las prestaciones 
float PrestacionesLaborales(float total)
    {
    float cal, cal2;
        if (total <= 1000)
        {
            cal = total * 0.11;
            cal2 = total - cal;
            return (cal2);
        } 
        
        else 
        {
            cal = total * 0.1225;
            cal2 = total - cal;
            return (cal2);
        } 
        
    }
    
int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    float salario, total, jonathanSalazar;
    int contador, detener, cant, i;
    // Bloque de instrucciones
    i = 0;
    detener = 1;
    
    printf("Calcular el salario de n empleados\n");
    
    // Iniciamos el loop del programa
    
    do{
    
    // Introducimos la cantidad de empleados     
    printf("\nIntroduzca la cantidad de empleados: ");
    scanf("%d",&cant); 
        
        // Establecemos la iteración que registra los salarios
        for(contador=1;contador<=cant;contador=contador+1)
           {
                // Añadimos una iteración que reinicie el valor de los acumuladores 
            for(i=1;i<=99999;i=i+1)
        
               {
                if (i==1) 
                    { 
                     total = 0;
                     salario = 0;
                    }     
       
                else
                    {
                     total = total - total;
                     salario = salario - salario;
                    }     
                }
                
                printf("\nIngrese el salario bruto del empleado %d: ", contador);
                scanf("%f",&salario);
                total = total + salario;// Colocamos el acumulador de los salarios
                
                // Establecemos la variable que ejecuta la función
                jonathanSalazar = PrestacionesLaborales(total);
                printf("\nEl salario del empleado es: %.2f \n", jonathanSalazar);
                  
            }
            
            // Aviso al usuario antes de dejar de usar el programa
            printf("\nSi desea dejar de utilizar el programa presione '0', si quiere seguir utilizando el programa presione '1': ");
            scanf("%d",&detener);
           
    } while (detener == 1);       
    
    printf("\n Nombre: Jonathan Salazar\n Cédula: 3-747-2358\n Grupo: 1SF 112 ");
    
  return 0;
} 