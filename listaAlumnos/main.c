#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "bibliotecaEstructuras.h"
#include "bibliotecaGetsYComprobaciones.h"
#include "ejercicioAlumnos.h"
#define T 3

int main()
{
    sAlumno listado[T];
    int opcion = 0;
    int indiceLugarLibre;
    int indiceBusqueda;
    char auxiliarLegajo[50];
    int auxiliarNuevaNota;

    inicializoEstructura(listado, T, -1);

    do
    {
        opcion = getIntOnly("\n 1- ALTA \n 2- BAJA \n 3- ORDENAR \n 4- APROBADOS  \n 5- LOS JUANES \n 6- CON P \n 7- MAYOR NOTA"
           "\n 8- EL MAS MEDIOCRE \n 9- MODIFICAR \n 10- SALIR \n Ingrese una opcion: ");
        switch(opcion)
        {
        case 1:
            indiceLugarLibre = buscarPrimerOcurrenciaEstado(listado, T, -1);
            if(indiceLugarLibre == -1)
            {
                printf("\nNo quedan espacios libres.\n");
                break;
            }
            system("cls");
            printf("ALTA\n\n");
            listado[indiceLugarLibre] = cargarUnAlumno();
            break;
        case 2:
            system("cls");
            printf("BAJA\n\n");
            mostrarListado(listado, T);
            if (!getStringNumber("\nIngrese el numero de legajo a dar de baja: ", auxiliarLegajo))
            {
                printf("El legajo debe ser numerico.\n");
                break;
            }
            indiceBusqueda = buscarPrimerOcurrenciaLegajo(listado, T, atoi(auxiliarLegajo));
            if(indiceBusqueda == -1)
            {
                printf("No se encuentra ese legajo.\n");
                break;
            }
            else
            {
                printf("\nEsta seguro que desea dar de baja?(s/n): ");
                if(getch() == 's')
                {
                    listado[indiceBusqueda].estado = -1;
                }
            }

            break;
        case 3:
            ordenar(listado, T);
            system("cls");
            printf("ORDENANDO...\n\n");
            mostrarListado(listado, T);
            system("pause");
            break;
        case 4:
            system("cls");
            printf("APROBADOS\n\n");
            mostrarAlumnoAprobado(listado, T);
            system("pause");
            break;
        case 5:
            system("cls");
            printf("LOS JUANES\n\n");
            mostrarAlumnoPorNombre(listado, T, "juan");
            system("pause");
            break;
        case 6:
            break;
        case 7:
            system("cls");
            printf("MAYOR NOTA\n");
            mostrarAlumnoMayorNota(listado, T);
            system("pause");
            break;
        case 8:
            break;
        case 9:
            system("cls");
            printf("MODIFICAR\n\n");
            mostrarListado(listado, T);
            if(!getStringNumber("\nIngrese el legajo a modificar: ", auxiliarLegajo))
            {
                printf("El legajo debe ser numerico.\n");
                break;
            }
            indiceBusqueda = buscarPrimerOcurrenciaLegajo(listado, T, atoi(auxiliarLegajo));
            if(indiceBusqueda == -1)
            {
                printf("\nEl legajo no existe.\n");
                break;
            }
            auxiliarNuevaNota = getInt("Ingrese la nueva nota: ");
            printf("\nEsta seguro que desea cambiar la nota?(s/n): ");
            if(getch() == 's')
            {
                listado[indiceBusqueda].nota = auxiliarNuevaNota;
            }
            break;
        case 10:
            break;
        }
            system("cls");
    }while(opcion != 10);

    return 0;
}
