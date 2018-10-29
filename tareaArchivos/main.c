#include <stdio.h>
#include <stdlib.h>

int sPersona_setName(char , char* nombre);
char* sPersona_getName(char nombre);
int sPersona_setId(char, int* id);
int sPersona_getId(int id);
void mostrar(char* nombre, char* apellido, int* id, char* genero);
char* newChar();
int* newInt();

int main()
{
    char nombreAux [100];
    char apellidoAux[100];
    char idAux[100];
    char generoAux[10];
    char* nombre;
    char* apellido;
    char* id;
    char* genero;

    FILE * pFile;

    pFile = fopen ("personas.csv", "r");

    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", idAux, nombreAux, apellidoAux, generoAux);

    sPersona_setName(nombreAux, nombre);
    sPersona_setName(apellidoAux, apellido);
    sPersona_setName(generoAux, genero);
    sPersona_setName(idAux, id);

    mostrar(nombre, apellido, id, genero);

    return 0;
}

char* newPerson()
{
    char dato;

    dato = (char*) calloc(sizeof(char),1);

    return dato;
}

int* newPerson()
{
    char dato;

    dato = (int*) calloc(sizeof(int),1);

    return dato;
}

int sPersona_setName(char auxNombre[], char* nombre)
{
    int estado = 0;
    if(nombre != NULL)
    {
        estado = 1;
        strcpy(nombre, auxNombre);
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

int sPersona_setId(int idAux, int* id)
{
    int estado = 0;
    if(id != NULL)
    {
        estado = 1;
        id = idAux;
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

void mostrar(char* nombre, char* apellido, int* id, char* genero)
{
       printf("%s - %s, %s - %s\n", id, nombre, apellido, genero);
}
