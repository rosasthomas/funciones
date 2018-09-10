#include <stdio.h>
#include <stdlib.h>


void inicializoArray (int vector[], int cantidad, int valorInicio);
void mostrarArray(int vector[], int cantidad);

int main()
{
    int vector[3];
    int valorInicio = -1;

    inicializoArray(vector, 3, valorInicio);
    mostrarArray(vector, 3);

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
