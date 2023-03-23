#include <stdio.h>
// Peso
int main()
{
    // Bloque de declarativas de variables
    float peso, promedio, porcentaje, pesoAlto, pesoBajo;
    int cant, sum, cont, x;
    // Bloque de instrucciones
    cant= -1;
    sum= 0;
    cont=0;
    do{	 
    	printf("\nIntroduzca el peso del camión: ");
    scanf("%f",&peso); 
    	cant=cant+1;
    	sum= sum+peso;
    
    	if (peso>pesoAlto)
    	{
    		pesoAlto=peso;
    		
	}
	if (peso<pesoBajo)
	{
		pesoBajo=peso;
	}

		
    	if (peso >= 15)
    	{ 
    	cont= cont+1;
		}
    	
	} while (peso>0);
	promedio= sum/cant;
    porcentaje= (cont*100)/cant;
	printf("\nLa cantidad de camiones es de: %i\n", cant);
	printf("\nEl promedio del peso de camiones es de: %2f\n", promedio);
	printf("\nEl porcentaje de camiones con peso mayor a 15 toneladas es de: %2f\n", porcentaje);
	printf("\nEl peso más alto es de: %2f\n", pesoAlto);
	printf("\nEl peso más bajo es de: %2f\n", pesoBajo);
	
}
