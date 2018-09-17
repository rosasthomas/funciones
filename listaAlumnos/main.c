#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "bibliotecaEstructuras.h"
#include "bibliotecaGetsYComprobaciones.h"
#define T 3


int main()
{
    sAlumno listado[T];
    int opcion = 0;
    int indiceLugarLibre;
    int indiceBusqueda;

    inicializoEstructura(listado, T, -1);
    cargarListado(listado, T);
    while(opcion != 10)
    {
        opcion = getInt("\n\n 1- ALTA \n 2- BAJA \n 3- ORDENAR \n 4- APROBADOS  \n 5- LOS JUANES \n 6- CON P \n 7- MAYOR NOTA"
           "\n 8- EL MAS MEDIOCRE \n 9- MODIFICACION \n 10- SALIR \n Ingrese una opcion: ");
        switch(opcion)
        {
        case 1:
            indiceLugarLibre = buscarPrimerOcurrencia(listado, T, -1);
            if(indiceLugarLibre == -1)
            {
                printf("No quedan espacios libres.");
                break;
            }
            printf("ALTA\n");
            listado[indiceLugarLibre] = cargarUnAlumno();
            break;
        case 2:
            printf("BAJA\n");
            if (!getStringNumero("Ingrese el numero de legajo a dar de baja: ",))
            {
                printf("El legajo debe ser numerico.");
                break;
            }
            indiceBusqueda = buscarPrimerOcurrencia(listado, T, )
            break;
        case 3:
            printf("ORDENANDO...");
            ordenar(listado, T);
            system(pause);
            system(cls);
            mostrarListado(listado, T);
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            //Buscar maximo y minimo
            //busqueda del maximo en el listado
            //mostrar todos las personas con nota maxima
            break;
        case 8:
            break;
        case 9:
            /*
            pedir legajo
            buscar legajo
            pido la nueva nota
            */
            break;
        case 10:
            break;
        }
    }

    return 0;
}
