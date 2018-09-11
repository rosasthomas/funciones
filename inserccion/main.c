#include <stdio.h>
#include <stdlib.h>

void insertion(int data[], int len);

int main()
{
    int vector[5] = {3,5,1,2,6};
    int i;

    insertion(vector, 5);

    for(i = 0; i <5; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}

void insertion(int data[], int len)
{
    int auxiliar;
    int i;
    int j;

    for(i = 1; i < len; i++)
    {
        auxiliar = data[i];
        j = i - 1;
        while(j >= 0 && auxiliar < data[j])
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = auxiliar;
    }
}
