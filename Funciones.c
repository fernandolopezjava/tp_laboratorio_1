#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int sumar(int numerouno,int numerodos)
{
    int suma;
    suma=numerouno+numerodos;
    return suma;
}

int restar(int numerouno,int numerodos)
{
   int restar;
    restar=numerouno-numerodos;
    return(restar);

}

int multiplicar(int numerouno,int numerodos)
{
    int multiplo;
    multiplo=numerouno*numerodos;
    return(multiplo);
}

float dividir(float numerouno,float numerodos)
{
    float dividir;
    if(numerouno==0 || numerodos==0)
    {
        return -1;
    }else
    {
        dividir=numerouno/numerodos;
        return(dividir);
    }
}
double FactorialNumeroUno(double numerouno)
{
    double resultado;
    int i;
    resultado = 1;
    if(numerouno != 0)
    {
        for(i=2; i<=numerouno; i++){
            resultado*= i;
        }
        return (resultado);
    }

    else
    {
        return 1;
    }
}


double FactorialNumeroDos(double numerodos)
{
    double resultado;
    int i;
    resultado = 1;
    if(numerodos != 0)
    {
        for(i=2; i<=numerodos; i++){
            resultado*= i;
        }
        return (resultado);
    }

    else
    {
        return 1;
    }
}

