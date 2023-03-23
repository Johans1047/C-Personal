#include <stdio.h>
// Calculadora
/* Entrada: Números para realizar la operación
   Proceso: Sumar, Restar, Multiplicar o Dividir
   Salida: Resultado final
*/

// Función que calcula las operaciones 
float Suma(float total, float total2)
    {
    float cal;
    
    cal = total + total2; 
    return (cal);
    }
    
float Resta(float total, float total2)
    {
    float cal;
    
    cal = total - total2; 
    return (cal);
    }    
    
float Multiplicacion(float total, float total2)
    {
    float cal;
    
    cal = total * total2; 
    return (cal);
    }
    
float Division(float total, float total2)
    {
    float cal;
    
    cal = total / total2; 
    return (cal);
    }    
    
int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    float num, num2, total, total2, jonathanSalazar, contador;
    int detener, i, opcion;
    // Bloque de instrucciones
    i = 0;
    detener = 1;
    
    printf("Calculadora\n");
    
    // Iniciamos el loop del programa
    
    do{
        
        // Establecemos la iteración que registra los números
        for(contador=1;contador<=1;contador=contador+1)
           {
                // Añadimos una iteración que reinicie el valor de los acumuladores 
            for(i=1;i<=99999;i=i+1)
        
               {
                if (i==1) 
                    { 
                     total = 0;
                     total2 = 0;
                    }     
       
                else
                    {
                     total = total - total;
                     total2 = total2 - total2;
                    }     
                }
                
                // Pedimos los números para realizar las operaciones
                printf("\nIngrese el primer número: ", contador);
                scanf("%f",&num);
                total = total + num; // Colocamos el acumulador de los números
                
                printf("\nIngrese el segundo número: ", contador);
                scanf("%f",&num2);
                total2 = total2 + num2;// Colocamos el acumulador de los números
                
                // Le pedimos al usuario que elija una opción según la operación que quiere realizar
                printf("\nIngrese '1' para sumar, '2' para restar, '3' para multiplicar o '4' para dividir: ");
                scanf("%d",&opcion);
                
                switch(opcion){
                    case 1: jonathanSalazar = Suma(total, total2);
                    printf("\nEl resultado de la suma es: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 2: jonathanSalazar = Resta(total, total2);
                    printf("\nEl resultado de la resta es: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 3: jonathanSalazar = Multiplicacion(total, total2);
                    printf("\nEl resultado de la multiplicacion es: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 4: jonathanSalazar = Division(total, total2);
                    printf("\nEl resultado de la división es: %.2f\n", jonathanSalazar);
                    break;
                    
                    default: printf("\nNo ha ingresado un número válido\n"); break;
                    
                }
                  
            }
            
            // Aviso al usuario antes de dejar de usar el programa
            printf("\nSi desea dejar de utilizar el programa presione '0', si quiere seguir utilizando el programa presione '1': ");
            scanf("%d",&detener);
           
    } while (detener == 1);       
    
    printf("\n Nombre: Jonathan Salazar\n Cédula: 3-747-2358\n Grupo: 1SF 112 ");
    
  return 0;
}