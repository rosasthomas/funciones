#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3

typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
}sAlumno;

void mostrarUnAlumno(sAlumno);
sAlumno cargarUnAlumno();
void cargarListado(sAlumno[], int);
void mostrarListado(sAlumno[], int);

int main()
{
    sAlumno listadoMain[T];

    cargarListado(listadoMain, T);
    mostrarListado(listadoMain, T);

    return 0;
}

void mostrarUnAlumno(sAlumno miAlumno)
{
    printf("%d -- %s -- %f -- %d \n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);
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

    return miAlumno;
}

void cargarListado(sAlumno listadoAlumnos[], int T)
{
    int i;
    for(i = 0; i < T; i++)
    {
        listadoAlumnos[i] = cargarUnAlumno();
    }
}

void mostrarListado(sAlumno listadoAlumnos[], int T)
{
    int i;
    for(i = 0; i < T; i++)
    {
        mostrarUnAlumno(listadoAlumnos[i]);
    }
}
