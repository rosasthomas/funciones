#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void ingreso(char texto[], char dato[]);
void mayuscula(char palabra[]);
void concatenar(char[], char[], char[]);
void copiar(char[], char[]);

int main()
{

    printf("%s", nombreYApellido);

    return 0;
}

void getNameLastName(sdirector listDirec[])
{
    char nombre[20];
    char apellido[20];
    char nombreYApellido[41];
    char buffer[1000];

    ingreso("Ingrese nombre: ", buffer);
    copiar(buffer, nombre);
    ingreso("Ingrese apellido: ", buffer);
    copiar(buffer, apellido);
    concatenar(nombre, apellido, nombreYApellido);
    mayuscula(nombreYApellido);

}

void ingreso(char texto[], char buffer[])
{
    printf("%s", texto);
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer) > 19)
    {
        printf("Error: %s", texto);
        fflush(stdin);
        gets(buffer);
    }
}

void concatenar(char nombre[], char apellido[], char nombreYApellido[])
{
    strcpy(nombreYApellido, apellido);
    strcat(nombreYApellido, ", ");
    strcat(nombreYApellido, nombre);
}

void mayuscula(char palabra[])
{
    int indice;

    strlwr(palabra);
    palabra[0] = toupper(palabra[0]);

    for(indice = 0; indice < strlen(palabra); indice++)
    {
        if(isspace(palabra[indice]))
        {
            palabra[indice + 1] = toupper(palabra[indice + 1]);
        }
        /* if(palabra[indice] == ' ')
        {
            palabra[indice + 1] = toupper(palabra[indice + 1]);
        } */

    }
}

void copiar(char buffer[], char palabra[])
{
    strcpy(palabra, buffer);
}
