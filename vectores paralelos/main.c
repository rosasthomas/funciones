#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaRosas.h"
#define T 3
#define valorVacio -1

/*
-ordenar por nombre;
-mostrar los alumnos aprobrados;
-mostrar los alumnos que se llaman juan;
-mostrar los alumnos cuyo nombre comience con P;
-el alumno con mas nota(puede ser mas de uno)
-el mas mediocre(legajo 100 nota 5 nombre pepe altura 1.75
-ingresar un legajo y pertmitir la modificacion de la nota
(transformar la carga de datos en una carga aleatoria)
*/
int main()
{
    int legajos[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    char mail[T][50];

    char auxiliarLegajosStr[];
    char auxiliarNombresStr[];
    char auxiliarNotasStr[];
    char auxiliarAlturasStr[];

    int opcion = 0;
    int indiceLugarLibre;

    inicializoArray(legajos, T, valorVacio);

    while(opcion != 10)
    {
        opcion = getInt("\n\n 1- ALTA \n 2- BAJA \n 3- ORDENAR \n 4- APROBADOS  \n 5- LOS JUANES \n 6- CON P \n 7- MAYOR NOTA"
           "\n 8- EL MAS MEDIOCRE \n 9- MODIFICACION \n 10- SALIR \n Ingrese una opcion: ");
        switch(opcion)
        {
        case 1:
            indiceLugarLibre = buscarPrimerOcurrencia(legajos, T, valorVacio);

            if(indiceLugarLibre == -1)
            {
                printf("\n NO QUEDAN LUGARES LIBRES");
                break;
            }

            printf("\n ALTA \n");
            cargarAlumnos(auxiliarLegajosStr, auxiliarNombresStr, auxiliarNotasStr, auxiliarAlturasStr, mail, T, legajos);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        }
    }

    return 0;
}
