#include <stdio.h>
#include <stdlib.h>

int guardarArchivoEnTXT(int array[], int tam, char nombre[])
{
    FILE* pArchivo;
    int i;

    pArchivo = fopen("archivo.txt", "w");
    for(i = 0; i < tam; i++)
    {
        fwrite(&array[i], sizeof(int), tam, pArchivo);
    }
    fclose(pArchivo);
        return 0;
}

int guardarArchivoEnBIN(int array[], int tam, char nombre[])
{
    FILE* pArchivo;
    pArchivo = fopen("archivo.bin", "wb");

    int i;
    for(i = 0; i < tam; i++)
    {
        fwrite(&array[i], sizeof(int), tam, pArchivo);
    }
    fclose(pArchivo);
        return 0;

}

int main()
{
    int dato[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        dato[i] = i + 1;
    }

    guardarArchivoEnTXT(dato, 10, "asd");



    for(i = 0; i < 10; i++)
    {
        printf("%d\n", dato[i]);
    }

    return 0;
}
