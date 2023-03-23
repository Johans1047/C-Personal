#include<stdio.h>

int main(){

int contTotal, contNinos, contNinas, entrada;
 float acum, acumM,acumF, mayorM,mayorF, estatura, promedio, promF, promM, ninoAlto, ninaAlta;
 char sexo;
 char nombre;
//bloque de instrucciones
 printf("Bienvenido al programa Equipo de Baloncesto");
 contTotal=0;
contNinos=0;
 contNinas=0;
 entrada =1;
 mayorM =0;
 mayorF=0;
 acum=0;
 acumM=0;
 acumF=0;

 //inicio del proceso de repetición
 while(entrada==1)
    {
     //lectura de los datos de entrada
     printf("\n\nIngrese el nombre del estudiante: ");
     scanf("%s",&nombre);
     printf("\nIngrese la estatura del estudiante: ");
     scanf("%f",&estatura);
     printf("\nIngrese F si es nina y M si es nino: ");
     scanf("%s",&sexo);
     contTotal=(contTotal+1);
     acum=(acum+estatura);
     if (sexo =='M'||'m')
    {
     contNinos=(contNinos +1);
     acumM=(acumM+estatura);
     if (estatura > mayorM)
        {
            mayorM=estatura;
            ninoAlto=nombre;
        }
    }
    else  (sexo =='F'||'f');
    {
        contNinas=(contNinas +1);
        acumF=(acumF+estatura);
    if (estatura > mayorF)
        {
        mayorF=estatura;
        ninaAlta=nombre;
        }
    }
printf("\nDesea ingresar otro estudiante? 1 para Si y 2 para No: ");
scanf("%i",&entrada);
    }

promedio = (acum/contTotal);
promM=(acumM/contNinos);
promF=(acumF/contNinas);


//impresión la salida

printf("\nEl promedio total de las estaturas de los estudiantes: %.2f ", promedio);
printf("\nEl promedio total de las estaturas de los ninos: %f ", promM);
printf("\nEl promedio total de las estaturas de las ninas: %f", promF);
printf("\nEl nino con la estatura mas alta: %f", mayorM);
printf("\nLa nina con la estatura mas alta: %f", mayorF);
    return 0;
}