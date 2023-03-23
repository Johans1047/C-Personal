#include <stdio.h>

int main(){
  //bloque declarativo
int a,b,c;
//bloque de instrucciones
printf("Introduzca 3 numeros difentes");
printf("\n\nIntroduzca el primer numero: ");
scanf("%i",&a);
printf("Introduzca el segundo numero: ");
scanf("%i",&b);
printf("Introduzca el tercer numero: ");
scanf("%i",&c);
if ((a>b) && (a>c))
{
        printf("\nEl numero mayor es %i ", a);
if (c>b){
    printf(" y el numero menor es %i ", b);
}
else {
        printf(" y el numero menor es %i ", c);
}
}else if ((b>a) && (b>c))
{
        printf("\nEl numero mayor es %i ", b);
if (a>c){
    printf(" y el numero menor es %i ", c);
}
else {
        printf(" y el numero menor es %i ", a);
}
}else if ((c>b) && (c>a))
{
        printf("\nEl numero mayor es %i ", c);
if (a>b){
    printf(" y el numero menor es %i ", b);
}
else {
        printf(" y el  numero menor es %i ", a);
}
}


return 0;
}
