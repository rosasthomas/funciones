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
    sFecha ingreso;
}sEmpleado;

int main()
{
    sEmpleado miEmpleado;

    miEmpleado.id = 25;
    miEmpleado.nacimiento.dia = 20;
    miEmpleado.nacimiento.mes = 10;
    miEmpleado.nacimiento.anio = 2000;

    return 0;
}
