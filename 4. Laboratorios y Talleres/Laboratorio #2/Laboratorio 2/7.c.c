#include <stdio.h>

int main(){
    //Bloque declarativo
    int text;
    //Bloque de instrucciones
    printf("Introduzca un numero del 1 al 10: ");
    scanf("%i",&text);
    switch(text){
    case 1:printf("\nOne\n");
    break;
    case 2:printf("\nTwo\n");
    break;
    case 3:printf("\nThree\n");
    break;
    case 4:printf("\nFour\n");
    break;
    case 5:printf("\nFive\n");
    break;
    case 6:printf("\nSix\n");
    break;
    case 7:printf("\nSeven\n");
    break;
    case 8:printf("\nEight\n");
    break;
    case 9:printf("\nNine\n");
    break;
    case 10:printf("\nTen\n");
    break;
    default: printf("\n%i No es un numero entre el 1 y el 10.\n",text);
    }

return 0;
}
