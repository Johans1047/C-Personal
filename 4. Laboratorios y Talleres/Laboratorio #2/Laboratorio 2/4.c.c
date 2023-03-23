#include <stdio.h>
// TipoDeTriángulo

int main()
{
    // Bloque de declarativas de variables
    // Variables de entrada
    int A, B, C;

    // Bloque de instrucciones
    printf(" Introducir el tamano del primer lado: ");
    scanf("%d",&A);

    printf("\n Introducir el tamano del segundo lado: ");
    scanf("%d",&B);

    printf("\n Introducir el tamano del tercer lado: ");
    scanf("%d",&C);



     if(A==B && B==C)
     {
          printf("\n El triangulo es equilátero");
     }

     else if(A==B && B!=C)
     {
          printf("\n El triangulo es isósceles");
     }

     else if(A==C && B!=C)
     {
          printf("\n El triangulo es isósceles");
     }

     else if(B==C && A!=B)
     {
          printf("\n El triangulo es isósceles");
     }

     else if(A!=B && B!=C && A!=C)
     {
          printf("\n El triangulo es escaleno");
     }

      return 0;
}
