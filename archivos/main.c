#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}sDato;

int main()
{
    FILE* pArchivo;
    sDato dato = {1, 'c'};

    pArchivo = fopen("archivo.bin", "wb");
    fwrite(&dato, sizeof(sDato), 1, pArchivo);
    fclose(pArchivo);

    fread(&dato, sizeof(sDato), 1, pArchivo);
    fclose(pArchivo);
    printf("%d -- %c", dato.a, dato.b);

    return 0;
}
