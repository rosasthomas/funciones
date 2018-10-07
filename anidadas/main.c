#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}sFecha;

typedef struct
{
    int id;
    int nombre[50];
    sFecha nacimiento;
}sEmpleado;

int main()
{
    sEmpleado miEmpleado[2];

    miEmpleado[0].id = 25;
    miEmpleado[0].nacimiento.dia = 20;
    miEmpleado[0].nacimiento.mes = 10;
    miEmpleado[0].nacimiento.anio = 2000;

    printf("%d/%d/%d", miEmpleado[0].nacimiento.dia,miEmpleado[0].nacimiento.mes, miEmpleado[0].nacimiento.anio);

    return 0;
}
