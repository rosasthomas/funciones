#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int* pInt;

    pInt = (int*)malloc(sizeof(int)*T);
    if(pInt != NULL)
    {
        int i;
        for(i = 0; i < T; i++)
        {
            printf("Ingrese numero: ");
            scanf("%d", pInt+i);
        }
        int k;
        for(k = 0; k < T; k++)
        {
            printf("%d\n", *(pInt+k));
        }
        pInt = (int*)realloc(pInt, (sizeof(int) * (T+5)));
    }
    return 0;
}
