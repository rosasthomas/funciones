#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ingreso(char texto[], char dato[]);
void mayuscula(char palabra[]);
void concatenar(char[], char[], char[]);

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreYApellido[40];

    ingreso("Ingrese nombre: ", nombre);
    ingreso("Ingrese apellido: ", apellido);
    concatenar(nombre, apellido, nombreYApellido);

    mayuscula(nombreYApellido);

    printf("%s", nombreYApellido);

    return 0;
}

void ingreso(char texto[], char dato[])
{
    printf("%s", texto);
    gets(dato);
}

void concatenar(char nombre[], char apellido[], char nombreYApellido[])
{
    strcat(nombreYApellido, nombre);
    strcat(nombreYApellido, apellido);
}

void mayuscula(char palabra[])
{
    /*palabra = strlwr(palabra);
    palabra[0] = strupr(palabra[0]);*/
    int i;
    for(i = 0; i < 40; i++)
    {
        if(palabra[i] == ' ')
        {
            palabra[i] = strupr(palabra[i]);
        }
    }
}
