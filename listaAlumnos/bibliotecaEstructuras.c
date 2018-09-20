#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "bibliotecaEstructuras.h"
#include "bibliotecaGetsYComprobaciones.h"

void mostrarUnAlumno(sAlumno listado[], int indice)
{
    printf("%d -- %s -- %f -- %d -- %s\n", listado[indice].legajo, listado[indice].nombre, listado[indice].altura, listado[indice].nota, listado[indice].mail);
}

sAlumno cargarUnAlumno()
{
    sAlumno miAlumno;

    miAlumno.legajo = getIntOnly("Ingrese legajo: ");

    fflush(stdin);
    getCharOnly("Ingrese nombre: ", miAlumno.nombre);

    miAlumno.nota = getIntOnly("Ingrese nota: ");

    printf("Ingrese altura: ");
    scanf("%f", &miAlumno.altura);

    printf("Ingrese mail: ");
    fflush(stdin);
    gets(miAlumno.mail);

    miAlumno.estado = 1;

    return miAlumno;
}

void cargarListado(sAlumno listadoAlumnos[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        listadoAlumnos[i] = cargarUnAlumno();
    }
}

void mostrarListado(sAlumno listadoAlumnos[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(listadoAlumnos[i].estado != -1)
        {
            mostrarUnAlumno(listadoAlumnos, i);
        }
    }
}

void ordenar(sAlumno listado[], int tam)
{
    int i;
    int j;
    sAlumno auxAlumno;

    for(i = 0; i < tam - 1; i++)
    {
        for(j = i + 1; j < tam; j++)
        {
            if(strcmp(listado[i].nombre, listado[j].nombre) > 0)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;
            }
        }
    }
}

void inicializoEstructura(sAlumno listado[], int cantidad, int valorInicio)
{
    int indice;
    for(indice = 0 ; indice < cantidad; indice++)
    {
        listado[indice].estado = valorInicio;
    }
}

int buscarPrimerOcurrenciaEstado(sAlumno listado[], int cantidad, int valor)
{
    int index = -1;
    int i;
    for(i = 0; i < cantidad; i ++)
    {
        if(listado[i].estado == valor)
        {
            index = i;
            break;
        }
    }
    return index;
}

int buscarPrimerOcurrenciaLegajo(sAlumno listado[], int cantidad, int valor)
{
    int index = -1;
    int i;
    for(i = 0; i < cantidad; i ++)
    {
        if(listado[i].legajo == valor)
        {
            index = i;
            break;
        }
    }
    return index;
}
