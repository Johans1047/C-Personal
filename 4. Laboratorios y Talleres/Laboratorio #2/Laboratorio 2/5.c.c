#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main () {
	//Bloque declarativas de variables
float precio1, precio2, precio3, sumaTotal, descuento, impuesto, totalFinal;
//Bloque de instrucciones
printf ("Escribe el precio del primer producto: ");
scanf ("%f", &precio1);
printf ("Escribe el precio del segundo producto: ");
scanf ("%f", &precio2);
printf ("Escribe el precio del tercer producto: ");
scanf ("%f", &precio3);
//Sumamos los precios
sumaTotal= precio1+precio2+precio3;
printf ("\nSubtotal: %.2f \n", sumaTotal);
//Calculamos si hay descuento
if (sumaTotal>=100) {
descuento= (sumaTotal*20)/100;
sumaTotal= sumaTotal-descuento;
impuesto= (sumaTotal*7)/100;
totalFinal= sumaTotal+impuesto;
printf ("\nDescuento: %.2f \n", descuento);
}
else {
impuesto= (sumaTotal*7)/100;
totalFinal= sumaTotal+impuesto;
}



printf ("ITBMS: %.2f \n", impuesto);
printf ("Total: %.2f \n", totalFinal);



	return 0;
}
