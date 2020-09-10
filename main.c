#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    float numerouno;
    float numerodos;
    int opcion;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    double factorialNumeroUno;
    double factorialNumeroDos;
    char salir;
    int BanderaNumeroUno;
    int BanderaNumeroDos;
    BanderaNumeroUno=0;
    BanderaNumeroDos=0;
    numerouno = 0;
    numerodos = 0;
    salir = 'n';


  do{

        if(BanderaNumeroUno==0)
        {
            printf("1. Ingrese el primer numero operando (A=X)\n");
        }
        else
        {
            printf("1. Ingrese el primer numero operando (A= %.2f)\n", numerouno);
        }
        if(BanderaNumeroDos==0)
        {
            printf("2. Ingresar segundo numero operando (B=Y)\n");
        }
        else
        {
            printf("2. Ingresar segundo numero operando (B= %.2f)\n", numerodos);
        }

        printf("3- Calcular todas las operaciones\n(Suma, Resta, Multiplicacion, Division y Factorial)\n");
        printf("4- Mostrar resultados\n");
        printf("5- Salir\n");
        printf("Opcion: ");
        scanf("%d",&opcion);

        while(opcion <1 || opcion >5)
        {
          printf("opcion invalida, introdusca la opcion correcta, acuerdese que es de la opcion 1 a la 5 \n");
          scanf("%d",&opcion);
        }


       switch(opcion){

        case 1:
            printf("\n-------------------------------------------------------------------------------\n\n");
            printf("\n Ingrese el primer numero: \n ");
            fflush(stdin);
            scanf("%f",& numerouno);
            printf("\n-------------------------------------------------------------------------------\n\n");
            BanderaNumeroUno=1;
            break;

        case 2:
             printf("\n-------------------------------------------------------------------------------\n\n");
             printf("\n Ingrese el segundo numero: \n ");
             fflush(stdin);
             scanf("%f",& numerodos);
             printf("\n-------------------------------------------------------------------------------\n\n");
             BanderaNumeroDos=1;
             break;

        case 3:
            printf("\n-------------------------------------------------------------------------------\n\n");
            suma = sumar(numerouno,numerodos);
            resta= restar(numerouno,numerodos);
            multiplicacion= multiplicar(numerouno,numerodos);
            division = dividir(numerouno,numerodos);
            factorialNumeroUno = FactorialNumeroUno(numerouno);
            factorialNumeroDos = FactorialNumeroDos(numerodos);

            printf("Operaciones calculadas\n");
            break;

        case 4:
            if(BanderaNumeroUno ==0 || BanderaNumeroDos==0){
               printf("debe introducir alguno de los valores para poder continuar \n");
            }
            else{
            printf("\n-------------------------------------------------------------------------------\n\n");
            printf("1er operando: %.4f\n",numerouno);
            printf("2do operando: %.4f\n\n",numerodos);
            printf("Resultados: \n\n");
            printf("La suma es %.4f\n",suma);
            printf("La resta es %.4f\n",resta);
            printf("El producto es %.4f\n",multiplicacion);

            if(numerouno==0 || numerodos==0){
             printf("operacion incorrecta, no se puede dividir por 0 ");
            }
            else{
             printf("el resultado de la division es %2.f\n" , division);
            }
            if(numerouno < 0)
            {
                printf("El factorial de un numero negativo (%.0f) es indefinido\n", numerouno);
            }
            else if(numerouno != 0)
            {
                printf("El factorial de (%.0f) es %.0f\n",numerouno,factorialNumeroUno);
            }

            if(numerodos < 0)
            {
                printf("El factorial de un numero negativo (%.0f) es indefinido\n", numerodos);
            }
            else if(numerodos!= 0)
            {
                printf("El factorial de (%.0f) es %.0f\n",numerodos,factorialNumeroDos);
            }

            break;
            }


         case 5:
            salir = 's';
            break;


}
       }while(salir== 'n');

       return 0;



}
