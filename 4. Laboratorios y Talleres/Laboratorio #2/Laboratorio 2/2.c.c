#include <stdio.h>

int main ()
{
//Bloque Declarativo de Variables
float calif1, calif2, calif3, calif4, calif5, prom;

//Bloque de Instrucciones
printf ("Ingresar la primera calificacion: ");
scanf("%f", &calif1);
printf ("Ingresar la segunda calificacion: ");
scanf("%f", &calif2);
printf("Ingresar la tercera calificacion: ");
scanf("%f", &calif3);
printf("Ingresar la cuarta calificacion: ");
scanf("%f", &calif4);
printf("Ingresar la quinta calificacion: ");
scanf("%f", &calif5);

//Se calcula el promedio
prom= (calif1+calif2+calif3+calif4+calif5)/5;

//Equivalencia en letras 
if ((0<prom) && (prom<61) ) { 
printf ("\n\nLa calificacion final es: F");
                             }
    else if ((60<prom) && (prom<71)) { 
printf("\n\nLa calificacion final es: D");
               }
else if((70<prom) && (prom<81)) { 
printf("\n\nLa calificacion final es: C");
                          }
else if ((80<prom) && (prom<91)) { 
printf("\n\nLa calificacion final es: B");
               }
else if((90<prom) && (prom<=100)) {
printf("\n\nLa calificacion final es: A");
               }


 
      return 0;
}
