#include<stdio.h>
int main(){

//bloque declarativo

	int edad1, edad2,diferencia;

//bloque de instrucciones

	printf("introduzca la edad 1: ");
	scanf("%d",&edad1);
	printf("introduzca edad 2: ");
	scanf("%d",&edad2);

//bloque condicional
	if(edad1>edad2){
		diferencia=(edad1-edad2);
		printf("la edad del mayor es: %d",edad1);
		printf("\nla diferencia de edad es: %d", diferencia);
	}
	else if(edad1<edad2){
		diferencia=(edad2-edad1);
		printf("la edad del mayor es: %d",edad2);
		printf("\nla diferencia de edad es: %d",diferencia);
		}

	else if(edad1=edad2){
		printf("\nlas edades son iguales");
}

	return 0;
}
