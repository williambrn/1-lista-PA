#include <stdio.h>

int main()
{

    int vet[] = {4,9,13};
    int i;

    for(i=0; i<3; i++)
    {
        printf("%d ",*(vet+i));
    }
    printf("\n");

    for(i=0; i<3; i++)
    {
        printf("%X ",vet+i);
    }

    printf("\n");

    for(i=0; i<3; i++)
    {
        printf("%X ",*(vet+i));
    }
}

