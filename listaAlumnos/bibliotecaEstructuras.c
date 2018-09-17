#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "bibliotecaEstructuras.h"
#include "bibliotecaGetsYComprobaciones.h"

void mostrarUnAlumno(sAlumno listado[], int indice)
{
    printf("%d -- %s -- %f -- %d \n", listado[indice].legajo, listado[indice].nombre, listado[indice].altura, listado[indice].nota);
}

sAlumno cargarUnAlumno()
{
    sAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    printf("Ingrese altura: ");
    scanf("%f", &miAlumno.altura);

    printf("Ingrese mail: ");
    fflush(stdin);
    gets(miAlumno.mail);

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
        mostrarUnAlumno(listadoAlumnos, i);
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
        listado[indice].legajo = valorInicio;
    }
}

int buscarPrimerOcurrencia(sAlumno listado[], int cantidad, int valor)
{
    int i;
    for(i = 0; i < cantidad; i ++)
    {
        if(listado[i].legajo == valor)
        {
            return i;
        }
    }
    return -1;
}
