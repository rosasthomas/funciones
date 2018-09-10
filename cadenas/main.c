#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[20] = "gato";
    int estado;

    estado = stricmp(cadena, "gato"); //no es keySensitive
    /*
    strlwr(cadena);
    estado = strcmp(cadena, "gato"); //Compara si los caracteres son iguales
    */
    printf("%d", estado);
    return 0;
}

/*
    printf("Ingrese texto: ");
    fflush(stdin);
    //scanf("%s", &cadena);
    gets(cadena);
    //fgets(cadena, 20, stdin);

    printf("%s", cadena);



       char cadena[20] = "perro";
    int cantidad;

     cantidad = strlen(cadena); //Sirve para contar la cantidad de caracteres
    printf("%d", cantidad);



    char cadena[20];

    strcpy(cadena, "gato"); //Igual a cadena = "perro";
    printf("%s", cadena);
*/
