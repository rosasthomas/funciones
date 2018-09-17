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
void inicializoEstructura(sAlumno[], int, int);
int buscarPrimerOcurrencia(int[], int, int);




