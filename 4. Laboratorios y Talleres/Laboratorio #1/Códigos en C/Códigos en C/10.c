#include <stdio.h>
// Distancia

int main()
{
    // Bloque de declarativas de variables
    // variables de entrada
    float velocidad, tiempo;
    // Variables de salida
    float distancia, distanciaMetros;
    // Bloque de instrucciones
    printf("Introduzca la velocidad: ");
    scanf("%f",&velocidad);
    printf("Introduzca el tiempo: ");
    scanf("%f",&tiempo);
    
    // Se calcula la distancia
   
    distancia = velocidad * tiempo;
    printf("\n La distancia es = %.2f Km", distancia);
    distanciaMetros = distancia * 1000;
    printf("\n La distancia es = %.2f metros", distanciaMetros);
    
    return 0;
}
