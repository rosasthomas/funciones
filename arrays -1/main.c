#include <stdio.h>
#include <stdlib.h>


void inicializoArray (int vector[], int cantidad, int valorInicio);
void mostrarArray(int vector[], int cantidad);
void mostrarYCargar(int vector[], int cantidad, int valorInicio);

int main()
{
    int cantidad = 1000;
    int vector[cantidad];
    int valorInicio = -1;

    mostrarYCargar(vector, cantidad, valorInicio);

    return 0;
}

void inicializoArray(int vector[], int cantidad, int valorInicio)
{
    for(; cantidad > 0; cantidad--)
    {
        vector[cantidad] = valorInicio;
    }
}

void mostrarArray(int vector[], int cantidad)
{
     for(; cantidad > 0; cantidad--)
    {
    printf("%d \n", vector[cantidad]);
    }
}

void mostrarYCargar(int vector[], int cantidad, int valorInicio)
{
    inicializoArray(vector, cantidad, valorInicio);
    mostrarArray(vector, cantidad);
}
