#include <stdio.h>
#include <stdlib.h>

void sumar1(void);
void sumar2 (int, int);
int sumar3(void);

int main()
{
    int suma;
    suma = sumar3();
    printf("La suma es : %d", suma);
    return 0;
}

int sumar3(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;
    //sumar1();
    return suma;
}


void sumar2(int unNumero, int otroNumero)
{
    int suma;

    suma = unNumero + otroNumero;
    printf("El resultado es: %d", suma);
}






void sumar1(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    printf("El resultado es: %d", suma);
}
