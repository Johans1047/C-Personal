
#include <stdio.h>

int main(){

    //Bloque declarativo
    char divisa;
    float cant, bolVen,dolCan,lib,pesCol,pesMex,yen,yuan,eur,reaBra,pesArg;
    int respuesta;
    //Bloque de instrucciones
    do{

	    printf("Divisas disponibles para cambiar a dolar ");
	    printf("\n\nIntroduzca 'a' para Bolivar Venezolano");
	    printf("\nIntroduzca 'b' para Dolar Canadiense");
	    printf("\nIntroduzca 'c' para Libra");
	    printf("\nIntroduzca 'd' para Peso Colombiano");
	    printf("\nIntroduzca 'e' para Peso Mexicano");
	    printf("\nIntroduzca 'f' para Yen");
	    printf("\nIntroduzca 'g' para Yuan");
	    printf("\nIntroduzca 'h' para Euro");
	    printf("\nIntroduzca 'i' para Real Brasileño");
	    printf("\nIntroduzca 'j' para Peso Argentino");
	    printf("\n\nIntroduzca la letra de la divisa que quiere cambiar a dolar: ");
	    scanf("%c",&divisa);
	    printf("\n\nIntroduzca la cantidad que desea cambiar: ");
	    scanf("%f",&cant);
	
	    bolVen=(cant/32738.48);
	    dolCan=(cant/1.35);
	    lib=(cant/0.78);
	    pesCol=(cant/3777.51);
	    pesMex=(cant/21.98);
	    yen=(cant/107.30);
	    yuan=(cant/7.07);
	    eur=(cant/0.88);
	    reaBra=(cant/5.06);
	    pesArg=(cant/69.31);
	
	    switch(divisa){
	        case 'a': printf("\nUsted recibira: %.2f", bolVen);
	        printf(" dolares. \n");
	        break;
	        case 'b': printf("\nUsted recibira: %.2f", dolCan);
	        printf(" dolares. \n");
	        break;
	         case 'c': printf("\nUsted recibira: %.2f", lib);
	         printf(" dolares. \n");
	        break;
	         case 'd': printf("\nUsted recibira: %.2f", pesCol);
	         printf(" dolares. \n");
	        break;
	         case 'e': printf("\nUsted recibira: %.2f", pesMex);
	         printf(" dolares. \n");
	        break;
	         case 'f': printf("\nUsted recibira: %.2f", yen);
	         printf(" dolares. \n");
	        break;
	         case 'g': printf("\nUsted recibira: %.2f", yuan);
	         printf(" dolares. \n");
	        break;
	         case 'h': printf("\nUsted recibira: %.2f", eur);
	         printf(" dolares. \n");
	        break;
	         case 'i': printf("\nUsted recibira: %.2f", reaBra);
	         printf(" dolares. \n");
	        break;
	         case 'j': printf("\nUsted recibira: %.2f", pesArg);
	         printf(" dolares. \n");
	        break;
	        default: printf("\nUsted introdujo una letra no valida. \n");
	        break;
	        
	        }
	        printf("\nSi desea volver a intentarlo presione 1; Si desea finalizar presione 0: ");
	        scanf("%i",&respuesta);
	        
		}while(respuesta == 1);

    




 
    return 0;

}