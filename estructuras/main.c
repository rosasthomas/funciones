#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
void ordenar(sAlumno[], int);

int main()
{
    sAlumno listadoMain[T];

    cargarListado(listadoMain, T);
    ordenar(listadoMain, T);
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
        mostrarUnAlumno(listadoAlumnos[i]);
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
