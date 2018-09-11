#include <stdio.h>
#include <stdlib.h>
#define T 3

void cargarAlumnos(int[], char[][21], int[], float[],int);
void mostrarAlumnos(int[], char[][21], int[], float[],int);
/*
-ordenar por nombre;
-mostrar los alumnos aprobrados;
-mostrar los alumnos que se llaman juan;
-mostrar los alumnos cuyo nombre comience con P;
-el alumno con mas nota(puede ser mas de uno)
-el mas mediocre(nlegajo 100 nota 5 nombre pepe altura 1.75
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

    cargarAlumnos(legajos, nombres, notas, alturas, T);
    mostrarAlumnos(legajos, nombres, notas, alturas, T);

    return 0;
}

void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float altura[],int T)
{
    int i;

    for(i = 0; i < T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);

        printf("Ingrese nota: ");
        scanf("%d", &notas[i]);

        printf("Ingrese altura: ");
        scanf("%f", &alturas[i]);
    }
}

void mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float altura[],int T)
{
    printf("%4s %5s %2s %5s \n", "Legajo", "Nombre", "Nota", "Altura");
    for(i = 0; i < T; i++)
    {
        printf("%4d  %5s  %2d  %5.2f\n", legajos[i], nombres[i], notas[i], alturas[i]);
    }
}
