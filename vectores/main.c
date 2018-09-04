#include <stdio.h>
#include <stdlib.h>
#define T 10

int main()
{
    int vector[T];
    int i;

    for(i = 0; i < T; i++) //Cargar todos los subindices.
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
    printf("\n Todos los numeros\n");
    for(i = 0; i < T; i++) //Mostrar todos los valores.
    {
        printf("%d\n", vector[i]);
    }

    printf("\n Numeros pares\n");
        for(i = 0; i < T; i++) //Mostrar valores pares.
    {
        if(vector[i] % 2 == 0)
        {
        printf("%d\n", vector[i]);
        }
    }

    return 0;
}

/*
int vector[5];

    vector[2] = 9;

    printf("%d", vector[2]);
*/
