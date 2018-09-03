#include <stdio.h>
#include <stdlib.h>
int factorial(int);

int main()
{
    int numero = 5;
    int result;
    result = factorial(numero);
    printf("El factorial es: %d", result);
    return 0;
}

int factorial(int numero)
{
    int resultado;
    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
    resultado = numero * factorial(numero - 1);
    }

    return resultado;
}

/*    int numero = 13;
    int i;
    long long int resultado = 1;

    for(i = numero; i >= 1; i--)
    {
        resultado = resultado * i;
    }
    printf("El factorial es: %lld", resultado);*/
