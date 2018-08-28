#include <stdio.h>
#include <stdlib.h>

void sumar1(void);
void sumar2 (int, int);

int main()
{
    int numeroUno;
    int numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    sumar2(numeroUno, numeroDos);
    //sumar1();
    return 0;
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
