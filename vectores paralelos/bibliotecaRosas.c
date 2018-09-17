#include <stdio.h>
#include "bibliotecaRosas.h"
#include <string.h>
#include <ctype.h>

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s", mensaje);
    scanf("%d", &auxiliar);
    return auxiliar;
}

int getStringLetras(char string[])
{
    int i = 0;
    while(string[i] != '\0' )
    {
        if(string[i] != ' ' && (string[i] < 'a' || string[i] > 'z') && (string[i] < 'A' || string[i] > 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int getStringNumero(char string[])
{
    int i = 0;
    while(string[i] != '\0')
    {
        if(string[i] < '0' || string[i] > '9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}


void cargarAlumnos(char auxiliarLegajos[], char nombres[][21], char notas[], char alturas[], char mail[][50],int T, int legajos[])
{
    int i;

    for(i = 0; i < T; i++)
    {
        printf("Ingrese legajo: ");
        if(!getStringNumero(auxiliarLegajos))
        {
            printf("El legajo debe estar compuesto solo por numeros.");
            break;
        }
        auxiliarLegajos = atoi(auxiliarLegajos);
        if(buscarPrimerOcurrencia(legajos, T, auxiliarLegajos) != -1)
        {
            printf("El legajo ya existe.");
            break;
        }

        printf("Ingrese nombre: ");
        fflush(stdin);
        if(!getStringLetras(nombres))
        {
            printf("El nombre debe estar compuesto solo por letras.");
            break;
        }

        printf("Ingrese nota: ");
        if(!getStringNumero(notas))
        {
            printf("La nota debe estar compuesta solo por numeros");
            break;
        }
        notas = atoi(notas);

        printf("Ingrese altura: ");
        if(!getStringNumero(alturas))
        {
            printf("La altura debe estar compuesta solo por numeros");
            break;
        }
        alturas = atof(alturas);

        printf("Ingrese mail: ");
        gets(mail[i]);
    }
}

void mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[],int T)
{
    int i;
    printf("%4s %5s %2s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    for(i = 0; i < T; i++)
    {
        printf("%4d  %5s  %2d  %5.2f\n", legajos[i], nombres[i], notas[i], alturas[i]);
    }
}

void inicializoArray(int array[], int cantidad, int valorInicio)
{
    int indice;
    for(indice = 0 ; indice < cantidad; indice++)
    {
        array[indice] = valorInicio;
    }
}

int buscarPrimerOcurrencia(int array[], int cantidad, int valor)
{
    int i;
    for(i = 0; i < cantidad; i ++)
    {
        if(array[i] == -1)
        {
            return i;
        }
    }
    return -1;
}

void ordenarPorNombre(int legajos[], char nombres[][21], int notas[], float alturas[],int tamaño)
{
    int auxInt;
    char auxString[100];
    float auxFloat;
    int i;
    int j;

    for(i = 0; i < tamaño - 1 ; i++)
    {
        for(j = i + 1; j < tamaño; j++)
        {
            if(strcmp(nombres[i], nombres[j]) > 0)
            {
                strcpy(auxString, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], auxString);

                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                auxInt = notas[i];
                notas[i] = notas[j];
                notas[j] = auxInt;

                auxInt = alturas[i];
                alturas[i] = alturas[j];
                alturas[j] = auxInt;
            }
        }
    }

}
