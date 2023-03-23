#include <stdio.h>

int main(){

    //Bloque declarativo
    float priVal, segVal, uno, dos, tres, cuatro;
    int operacion;
    //Bloque de instrucciones
    printf("Programa que realiza operaciones basicas con dos valores.");
    printf("\n\nIntroduzca el primer valor: ");
    scanf("%f",&priVal);
    printf("Introduzca el segundo valor: ");
    scanf("%f",&segVal);
    printf("\nQue operacion quiere realizar?");
    printf("\nIntroduzca '1' para sumar los valores, '2' para restar,'3' para multiplicar, '4' para dividir: ");
    scanf("%i",&operacion);
    uno= (priVal+segVal);
    dos= (priVal-segVal);
    tres= (priVal*segVal);
    cuatro=(priVal/segVal);


    switch(operacion){
    case 1: printf("\nEl resultado de la suma es: %.f\n",uno);
    break;
    case 2: printf("\nEl resultado de la resta es: %.f\n",dos);
    break;
    case 3: printf("\nEl resultado de la multiplicacion es: %.f\n",tres);
    break;
    case 4: printf("\nEl resultado de la division es: %.2f\n",cuatro);
    break;
    default: printf("No introdujo un numero valido.\n");


    }




    return 0;
}
