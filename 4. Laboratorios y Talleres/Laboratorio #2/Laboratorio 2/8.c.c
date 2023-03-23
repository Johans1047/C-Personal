#include <stdio.h>

int main(){

    //Bloque declarativo
    int numero;
    //bloque de instrucciones
    printf("Introduzca un numero entre el 1 y el 12: ");
    scanf("%i",&numero);
    switch(numero){
    case 1:printf("\nI\n");
    break;
    case 2:printf("\nII\n");
    break;
    case 3:printf("\nIII\n");
    break;
    case 4:printf("\nIV\n");
    break;
    case 5:printf("\nV\n");
    break;
    case 6:printf("\nVI\n");
    break;
    case 7:printf("\nVII\n");
    break;
    case 8:printf("\nVIII\n");
    break;
    case 9:printf("\nIX\n");
    break;
    case 10:printf("\nX\n");
    break;
    case 11:printf("\nXI\n");
    break;
    case 12:printf("\nXII\n");
    break;
    default: printf("\n%i No es un numero entre 1 y 12.\n", numero);

    }


    return 0;

}
