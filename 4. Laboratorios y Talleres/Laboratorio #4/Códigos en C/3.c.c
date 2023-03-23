#include <stdio.h>
// Monedas
/* Entrada: Divisas de cada país
   Proceso: Calcular el cambio de monedas
   Salida: Equivalente de las divisas en dólar
*/

// Funciones que calculan los cambios de divisas  
float Bol(float total)
    {
    float cal;
    
    cal = total / 32738.48; 
    return (cal);
    }
    
float Can(float total)
    {
    float cal;
    
    cal = total / 1.35; 
    return (cal);
    }
    
float Libra(float total)
    {
    float cal;
    
    cal = total / 0.78; 
    return (cal);
    }
    
float Col(float total)
    {
    float cal;
    
    cal = total / 3777.51; 
    return (cal);
    }

float Mex(float total)
    {
    float cal;
    
    cal = total / 21.98; 
    return (cal);
    }
    
float Yen(float total)
    {
    float cal;
    
    cal = total / 107.30; 
    return (cal);
    } 
    
float Yuan(float total)
    {
    float cal;
    
    cal = total / 7.07; 
    return (cal);
    } 
 
float Euro(float total)
    {
    float cal;
    
    cal = total / 0.88; 
    return (cal);
    }
    
float Brasil(float total)
    {
    float cal;
    
    cal = total / 5.06; 
    return (cal);
    } 
    
float Arg(float total)
    {
    float cal;
    
    cal = total / 69.31; 
    return (cal);
    }
    
int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    float moneda, total, jonathanSalazar, contador;
    int detener, cant, i, opcion;
    // Bloque de instrucciones
    i = 0;
    detener = 1;
    
    printf("Calculadora de Divisas\n");
    
    // Iniciamos el loop del programa
    
    do{
        printf("Ingrese la cantidad de divisas que va a convertir: ");
        scanf("%d",&cant);
        
        // Establecemos la iteración que registra las divisas
        for(contador=1;contador<=cant;contador=contador+1)
           {
                // Añadimos una iteración que reinicie el valor de los acumuladores 
            for(i=1;i<=99999;i=i+1)
        
               {
                if (i==1) 
                    { 
                     total = 0;
                    }     
       
                else
                    {
                     total = total - total;
                    }     
                }
                
                // Pedimos la cantidad de dinero para realizar las operaciones
                printf("\nIngrese el dinero recibido: ", contador);
                scanf("%f",&moneda);
                total = total + moneda; // Colocamos el acumulador de las divisas
                
                
                // Le pedimos al usuario que elija una opción según la divisa que quiera calcular
                printf("\nIngrese '1' para BOLIVAR VENEZOLANO, '2' para DOLAR CANADIENSE, '3' para LIBRA,");
                printf(" '4' para PESO COLOMBIANO, '5' para PESO MEXICANO, '6' para YEN,");
                printf(" '7' para YUAN, '8' para EURO, '9' para REAL BRASILEÑO,");
                printf(" e ingrese '10' para PESO ARGENTINO: ");
                scanf("%d",&opcion);
                
                switch(opcion){
                    case 1: jonathanSalazar = Bol(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 2: jonathanSalazar = Can(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 3: jonathanSalazar = Libra(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 4: jonathanSalazar = Col(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 5: jonathanSalazar = Mex(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 6: jonathanSalazar = Yen(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 7: jonathanSalazar = Yuan(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 8: jonathanSalazar = Euro(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 9: jonathanSalazar = Brasil(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    case 10: jonathanSalazar = Arg(total);
                    printf("\nLas divisas en dólares equivalen a: %.2f\n", jonathanSalazar);
                    break;
                    
                    default: printf("\nNo ha ingresado un número válido\n"); break;
                    
                }
                  
            }
            
            // Aviso al usuario antes de dejar de usar el programa
            printf("\nSi desea dejar de utilizar el programa presione '0', si quiere seguir utilizando el programa presione '1': ");
            scanf("%d",&detener);
           
    } while (detener == 1);       
    
    printf("\n Nombre: Jonathan Salazar\n Cedula: 3-747-2358\n Grupo: 1SF 112 ");
    
  return 0;
}