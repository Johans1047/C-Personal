#include <stdio.h>

int main(){
	
	int i=1,n;
	float oferta, menor=999999999, mayor=0, diferencia;
	
	printf("introduzca la cantidad de ofertas: ");
	scanf("%d",&n);
	
	do{
		printf("introduzca las ofertas: ");
		scanf("%f",&oferta);
		
			if(oferta<menor){
				menor=oferta;
			}
			else if(oferta>mayor){
				mayor=oferta;
			}
			i++;
	
	}while (i<=n);
		diferencia=(mayor-menor);
		printf("la oferta menor es: %.2f \n",menor);
		printf("la diferencia con la mayor es de: %.2f",diferencia);
}