#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5

typedef struct
{
    char nombre[50];
    int edad;
} sPersona;

sPersona* newPerson(void);
int sPersona_setName(sPersona* this, char* nombre);
char* sPersona_getName(sPersona* this);
int sPersona_setEdad(sPersona* this, int edad);
int sPersona_getEdad(sPersona* this);
void mostrar(sPersona* persona);

int main()
{
    sPersona* persona;
    persona = newPerson();

    if(persona)
    {
        sPersona_setName(persona, "Juan");
        sPersona_setEdad(persona, 13);
        mostrar(persona);
    }
    else
    {
        printf("Error");
    }


    return 0;
}

sPersona* newPerson()
{
    sPersona* persona;

    /*persona = (sPersona*)malloc(sizeof(sPersona));
    if(persona != NULL)
    {
        persona->edad = 0;
        strcpy(persona->nombre, " -");
    }*/

    persona = (sPersona*) calloc(sizeof(sPersona),1);

    return persona;
}

int sPersona_setName(sPersona* this, char* nombre)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->nombre, nombre);
    }

    return estado;
}
char* sPersona_getName(sPersona* this)
{
    char* nombre = "-1";

    if(this != NULL)
    {
        strcpy(nombre, this -> nombre);
    }

    return nombre;
}

int sPersona_setEdad(sPersona* this, int edad)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        this->edad = edad;
    }

    return estado;
}
int sPersona_getEdad(sPersona* this)
{
    int edad = 0;

    if(this != NULL)
    {
        this -> edad = edad;
    }

    return edad;
}

void mostrar(sPersona* this)
{
    printf("Nombre: %s -- Edad: %d", this->nombre, this->edad);
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
