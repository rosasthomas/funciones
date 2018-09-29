#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "bibliotecaEstructuras.h"
#include "bibliotecaGetsYComprobaciones.h"
#include "ejercicioAlumnos.h"

int main()
{
    sAlumno listado[T];
    int opcion = 0;
    int flagAlta;
    int flagBaja;
    int flagModificacion;

    inicializoEstructura(listado, T, -1);

    do
    {
        opcion = getIntOnly("\n 1- ALTA \n 2- BAJA \n 3- ORDENAR \n 4- APROBADOS  \n 5- LOS JUANES \n 6- CON P \n 7- MAYOR NOTA"
                            "\n 8- EL MAS MEDIOCRE \n 9- MODIFICAR \n 10- SALIR \n Ingrese una opcion: ");
        switch(opcion)
        {
        case 1:
            flagAlta = altaDeAlumno(listado);
            if(flagAlta == 1)
            {
                system("cls");
                printf("\nSe cargo satisfactoriamente\n\n");
                system("pause");
            }
            break;
        case 2:
            flagBaja = bajaDeAlumno(listado);
            if(flagBaja == 1)
            {
                system("cls");
                printf("\nSe dio de baja satisfactoriamente\n\n");
                system("pause");
            }
            else
            {
                system("cls");
                printf("\nNo se pudo dar de baja\n\n");
                system("pause");
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
            flagModificacion = ModificacionDeAlumno(listado);
            if(flagModificacion== 1)
            {
                system("cls");
                printf("\nSe modifico satisfactoriamente\n\n");
                system("pause");
            }
            else
            {
                system("cls");
                printf("\nNo se pudo modificar\n\n");
                system("pause");
            }

            break;
        case 10:
            break;
        }
        system("cls");
    }
    while(opcion != 10);

    return 0;
}
