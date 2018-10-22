#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int a;
    char b;
}sDato;

sDato* funcion(int x, char y);

int main()
{
    sDato* pDato;
    sDato* pDatoDos;

    pDato = funcion(1,'a');
    printf("%d %c\n", pDato->a, pDato->b);

    pDatoDos = funcion(5,'m');
    printf("%d %c", pDatoDos->a, pDatoDos->b);

    return 0;
}

sDato* funcion(int x, char y)
{
    sDato* pDato;
    sDato datito;

    pDato = &datito;

    pDato -> a = x;
    pDato -> b = y;

    return pDato;
}

/*
    sDato datoMain;
    sDato* pDato;
    int x;

    datoMain.a = 1;
    datoMain.b = 'a';

    pDato = &datoMain;

    x = (*pDato).a;

    printf("%d", x);
    */

    /*
    sDato datoMain[2] = {{1,'c'},{2,'b'}};
    sDato* pDato;

    pDato = datoMain;

    int i;
    for(i = 0; i < 2; i++)
    {
        printf("%d\n", (*(pDato + i)).a);
        printf("%c\n", (*(pDato + i)).b);

    }
    */

    /*
    sDato datoMain[2] = {{1,'c'},{2,'b'}};
    sDato* pDato;

    pDato = datoMain;

    int i;
    for(i = 0; i < 2; i++)
    {
        printf("%d\n", (pDato+i) -> a);
        printf("%c\n", (pDato+i) -> b);
    }
    */
