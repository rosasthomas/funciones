#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5

typedef struct
{
    char nombre[50];
    int edad;
} sPersona;

sPersona* newPerson(char nombre[], int edad);

int main()
{
    sPersona* persona;

    char nombre[50];
    int edad;

    printf("ingrese nombre: ");
    gets(nombre);
    printf("Ingrese edad: ");
    scanf("%d", &edad);

    persona = newPerson(nombre, edad);

    printf("Nombre: %s -- Edad: %d", persona->nombre, persona->edad);
    return 0;
}

sPersona* newPerson(char nombre[], int edad)
{
    sPersona* persona;

    /*persona = (sPersona*)malloc(sizeof(sPersona));
    if(persona != NULL)
    {
        persona->edad = 0;
        strcpy(persona->nombre, " -");
    }*/

    persona = (sPersona*) calloc(sizeof(sPersona),1);

    if(persona != NULL)
    {
        persona->edad = edad;
        strcpy(persona->nombre, nombre);
    }

    return persona;
}

/*
int* pInt;
    int* aux;

    pInt = (int*)malloc(sizeof(int)*T);
    if(pInt != NULL)
    {
        int i;
        for(i = 0; i < T; i++)
        {
            printf("Ingrese numero: ");
            scanf("%d", pInt+i);
        }
        int k;
        for(k = 0; k < T; k++)
        {
            printf("%d\n", *(pInt+k));
        }
        aux = (int*)realloc(pInt, (sizeof(int)) * (T+5));
        if(aux != NULL)
        {
            pInt = aux;
            for(i = T; i < T+5; i++)
            {
                *(pInt+i) = i+1;
            }
            printf("Array de 10\n");
            for(k = 0; k < T+5; k++)
            {
                printf("%d\n", *(pInt+k));
            }
            pInt = (int*)realloc(pInt, (sizeof(int)) * 3);
            printf("Array de 3\n");
            for(k = 0; k < 3; k++)
            {
                printf("%d\n", *(pInt+k));
            }
        }
    }
*/
