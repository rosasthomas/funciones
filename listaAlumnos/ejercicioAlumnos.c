#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "bibliotecaEstructuras.h"
#include "bibliotecaGetsYComprobaciones.h"
#include "ejercicioAlumnos.h"

void mostrarAlumnoAprobado(sAlumno listado[], int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        if(listado[i].nota > 6 && listado[i].estado != -1)
        {
            mostrarUnAlumno(listado, i);
        }
    }
}
void mostrarAlumnoPorNombre(sAlumno listado[], int tam, char nombre[])
{
    int i;

    for(i = 0; i < tam; i++)
    {
        if(listado[i].nombre == nombre && listado[i].estado != -1)
        {
            mostrarUnAlumno(listado, i);
        }
    }
}
void mostrarAlumnoMayorNota(sAlumno listado[], int tam)
{
    int i;
    int max = 0;

    for(i = 0; i < tam; i++)
    {
        if(listado[i].nota > max)
        {
            max = listado[i].nota;
        }
    for(i = 0; i < tam; i++)
    {
        if(listado[i].nota == max && listado[i].estado != -1)
        {
            mostrarUnAlumno(listado, i);
        }
    }
    }
}
