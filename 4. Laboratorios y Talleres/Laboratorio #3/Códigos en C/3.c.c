#include <stdio.h>
// Promedio

int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    float calificacion, total;
    int contador, detener, est, i;
    // Variables de salida
    float promedio, calAlta, calBaja; 
    float contadorA, contadorB, contadorC, contadorD, contadorF, porcentajeA, porcentajeB, porcentajeC, porcentajeD, porcentajeF;
    // Bloque de instrucciones
    i = 0;
    detener = 1;
    
    printf("Registrar el promedio de n estudiantes \n");
    
    // Iniciamos el loop del programa
    
    do{
        
        // Añadimos una iteración que reinicie el valor de los acumuladores de las notas
        for(i=1;i<=99999;i=i+1)
        
           {
                if (i==1) 
                   { contadorA = 0; 
                     contadorB = 0;
                     contadorC = 0;
                     contadorD = 0;
                     contadorF = 0;
                     total = 0;
                   }     
       
                else
                   { contadorA = contadorA - contadorA;
                     contadorB = contadorB - contadorB;
                     contadorC = contadorC - contadorC;
                     contadorD = contadorD - contadorD;
                     contadorF = contadorF - contadorF;
                     total = total - total;
                   }     
           }   
    
    // Introducimos la cantidad de estudiantes      
    printf("\nIntroduzca la cantidad de estudiantes: ");
    scanf("%d",&est); 
        
        // Establecemos la iteración que registra los promedios
        for(contador=1;contador<=est;contador=contador+1)
           {
                printf("\nIngrese el promedio del estudiante %d: ", contador);
                scanf("%f",&calificacion);
                total = total + calificacion;    // Colocamos el acumulador de los promedios
                  
                    // Establecemos la condición para que los registros sean de un número válido
                    if (calificacion >= 0 && calificacion <=100)
                    {
                        // Hacemos la comparación de los promedios para obtener el mayor y el menor
                        if (contador==1)
                        {
                           calAlta = calificacion;
                           calBaja = calificacion;
                        }
                        
                        else
                        {
                           if (calificacion > calAlta) calAlta = calificacion;
                           if (calificacion < calBaja) calBaja = calificacion;
                        }
                        
                        // Establecemos la nota adquirida por el estudiante en función de su promedio
                        if (calificacion <= 60)
                        {
                           printf("La nota final es F\n");
                           contadorF = contadorF + 1;
                        } 
        
                        else if (calificacion >= 61 && calificacion <=70)
                        {
                           printf("La nota final es D\n");
                           contadorD = contadorD + 1;
                        } 
         
                        else if (calificacion >= 71 && calificacion <=80)
                        {
                           printf("La nota final es C\n");
                           contadorC = contadorC + 1;
                        } 
         
                        else if (calificacion >= 81 && calificacion <=90)
                        {
                           printf("La nota final es B\n");
                           contadorB = contadorB + 1;
                        } 
          
                        else if (calificacion >= 91 && calificacion <=100)
                        {
                           printf("La nota final es A\n");
                           contadorA = contadorA + 1;
                        }
                    }
                   
                    // En caso de que la persona ingrese un número incorrecto se le pedirá de nuevo
                    else
                    {
                        printf("\nHa ingresado un número que no es válido, ingrese nuevamente la calificación (debe estar entre 0 y 100)\n");
                        contador = contador - 1;
                    } 
            }
            
            // Calculamos el promedio total 
            promedio = total/est;
            printf("\nEl promedio total es: %.2f\n", promedio);
            
            // Cantidad de estudiantes por nota
            printf("\nla cantidad de estudiantes que obtuvieron F es: %.0f\n", contadorF);
            printf("la cantidad de estudiantes que obtuvieron D es: %.0f\n", contadorD);
            printf("la cantidad de estudiantes que obtuvieron C es: %.0f\n", contadorC);
            printf("la cantidad de estudiantes que obtuvieron B es: %.0f\n", contadorB);
            printf("la cantidad de estudiantes que obtuvieron A es: %.0f\n\n", contadorA);
            
            // Porcentaje de estudiantes por nota
            porcentajeF = (contadorF*100) / est;
            porcentajeD = (contadorD*100) / est;
            porcentajeC = (contadorC*100) / est;
            porcentajeB = (contadorB*100) / est;
            porcentajeA = (contadorA*100) / est;
            
            printf("El porcentaje de estudiantes que obtuvieron F es: %.2f\n", porcentajeF);
            printf("El porcentaje de estudiantes que obtuvieron D es: %.2f\n", porcentajeD);
            printf("El porcentaje de estudiantes que obtuvieron C es: %.2f\n", porcentajeC);
            printf("El porcentaje de estudiantes que obtuvieron B es: %.2f\n", porcentajeB);
            printf("El porcentaje de estudiantes que obtuvieron A es: %.2f\n", porcentajeA);
            
            // Calificación más alta y más baja
            printf("\nLa calificacion más alta es: %.2f\nLa calificacion más baja es: %.2f\n", calAlta, calBaja);
            
            // Aviso al usuario antes de dejar de usar el programa
            printf("\nSi desea dejar de utilizar el programa presione '0', si quiere seguir utilizando el programa presione '1': ");
            scanf("%d",&detener);
           
    } while (detener == 1);       
    
  return 0;
} 