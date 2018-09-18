typedef struct
{
    int legajo;
    char nombre[21];
    int nota;
    float altura;
    char mail[50];
    int estado;
}sAlumno;

void mostrarUnAlumno(sAlumno[], int);
sAlumno cargarUnAlumno();
void cargarListado(sAlumno[], int);
void mostrarListado(sAlumno[], int);
void ordenar(sAlumno[], int);
void inicializoEstructura(sAlumno[], int, int);
int buscarPrimerOcurrencia(sAlumno[], int, int);




