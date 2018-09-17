#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define T 3

typedef struct
{
    int legajos;
    char nombres[21];
    int notas;
    float alturas;
    char mail[50];
}sAlumno;

void mostrarUnAlumno(sAlumno);
sAlumno cargarUnAlumno();
void cargarListado(sAlumno[], int);
void mostrarListado(sAlumno[], int);
void ordenar(sAlumno[], int);

int main()
{
    sAlumno listado[T];
    int opcion = 0;

    while(opcion != 10)
    {
        opcion = getInt("\n\n 1- ALTA \n 2- BAJA \n 3- ORDENAR \n 4- APROBADOS  \n 5- LOS JUANES \n 6- CON P \n 7- MAYOR NOTA"
           "\n 8- EL MAS MEDIOCRE \n 9- MODIFICACION \n 10- SALIR \n Ingrese una opcion: ");
        switch(opcion)
        {
        case 1:
            printf("ALTA\n");
            cargarListado(listado, T);
            break;
        case 2:

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
