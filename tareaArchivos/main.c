#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[50];
    char apellido[50];
    int id;
    char genero[10];
} sPersona;

sPersona* newPerson(void);
int sPersona_setName(sPersona* this, char* nombre);
char* sPersona_getName(sPersona* this);
int sPersona_setLastName(sPersona* this, char* apellido);
char* sPersona_getLastName(sPersona* this);
int sPersona_setId(sPersona* this, int id);
int sPersona_getId(sPersona* this);
void mostrar(sPersona* persona);
int sPersona_setGender(sPersona* this, char* id);
char* sPersona_getGender(sPersona* this);

int main()
{
    char nombreAux [100];
    char apellidoAux[100];
    char idAux[100];
    char generoAux[10];

    sPersona* persona;

    persona = newPerson();

    FILE * pFile;

    pFile = fopen ("personas.csv", "r");

    while(!feof(pFile))
   {
    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", idAux, nombreAux, apellidoAux, generoAux);

    sPersona_setName(persona, nombreAux);
    sPersona_setGender(persona, generoAux);
    sPersona_setLastName(persona, apellidoAux);
    sPersona_setId(persona, atoi(idAux));

    mostrar(persona);
   }
    fclose(pFile);
    return 0;
}

sPersona* newPerson()
{
    sPersona* persona;

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
int sPersona_setLastName(sPersona* this, char* apellido)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->apellido, apellido);
    }

    return estado;
}

char* sPersona_getLastName(sPersona* this)
{
    char* apellido = "-1";

    if(this != NULL)
    {
        strcpy(apellido, this -> apellido);
    }

    return apellido;
}

int sPersona_setId(sPersona* this, int id)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        this->id = id;
    }

    return estado;
}
int sPersona_getId(sPersona* this)
{
    int id = 0;

    if(this != NULL)
    {
        this -> id = id;
    }

    return id;
}

int sPersona_setGender(sPersona* this, char* genero)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->genero, genero);
    }

    return estado;
}

char* sPersona_getGender(sPersona* this)
{
    char* genero = "-1";

    if(this != NULL)
    {
        strcpy(genero, this -> genero);
    }

    return genero;
}

void mostrar(sPersona* this)
{
       printf("%4d - %-s, %-10s \t- %-s\n", this->id, this->nombre, this->apellido, this->genero);
}
