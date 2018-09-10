#include <stdio.h>
#include <stdlib.h>


void inicializoArray (int vector[], int cantidad, int valorInicio);
void mostrarArray(int vector[], int cantidad);
void mostrarYCargar(int vector[], int cantidad, int valorInicio);

int main()
{
    int cantidad = 10000;
    int vector[cantidad];
    int valorInicio = -1;

    mostrarYCargar(vector, cantidad, valorInicio);

    return 0;
}

void inicializoArray(int vector[], int cantidad, int valorInicio)
{
    int indice;
    for(indice = 0 ; indice < cantidad; indice++)
    {
        vector[indice] = valorInicio;
    }
}

void mostrarArray(int vector[], int cantidad)
{
    int indice;
     for(indice = 0; indice < cantidad; indice++)
    {
    printf("%d \n", vector[indice]);
    }
}

void mostrarYCargar(int vector[], int cantidad, int valorInicio)
{
    inicializoArray(vector, cantidad, valorInicio);
    mostrarArray(vector, cantidad);
}
