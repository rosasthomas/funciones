int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s", mensaje);
    scanf("%d", &auxiliar);
    return auxiliar;
}

char getChar(char mensaje[])
{
    int aux;
    printf("%s", mensaje);
    scanf("%c", aux);
    return aux;
}

float getFloat(char mensaje[])
{
    int aux;
    printf("%s", mensaje);
    scanf("%f", aux);
    return aux;
}

int isNumeric(char array[])
{
    int i = 0;
    while(array[i] != '\0')
    {
        if(array[i] <  '0' || array[i] > '9')
        {
            return 0;

        }
        i++;
    }
    return 1;
}

int isLetters(char array[])
{
    int i = 0;
    while(array[i] != '\0' )
    {
        if(array[i] != ' ' && (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int isAlphanumeric(char array[])
{
    int i = 0;
    while(array[i] != '\0' )
    {
        if(array[i] != ' ' && (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z' &&
                                                                        array[i] <  '0' || array[i] > '9'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int isPhone(char array[])
{
    int i;
    int contadorGuion = 0;

    while(array[i] != '\0')
    {
        if((array[i] != ' ') && (array[i] != '-') && (array[i] < '0' || array[i] > '9'))
        {
            return 0;
        }
        if(array[i] == '-')
        {
            contadorGuion++;
        }
        i++;
    }
    if(contadorGuion == 1)
    {
        return 1;
    }
    return 0;
}

void getString(char mensaje[], char input[])
{
    printf("%s", mensaje);
    scanf("%s", input);
}


int getStringLetters(char mensaje[], char input[])
{
    char aux[256];

    getString(mensaje, aux);
    if(isLetters(aux))
    {
        strcpy(input, aux);
        return 1;
    }
    return 0;
}

int getStringNumero(char string[])
{
    int i = 0;
    while(string[i] != '\0')
    {
        if(string[i] < '0' || string[i] > '9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}
