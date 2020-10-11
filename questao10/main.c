#include <stdio.h>

int main()
{

    char x1[4];
    int x2[4];
    short int x3[4];
    float x4[4];
    double x5[4];


    printf("\n char: \n"); // Intervalos de 1 byte;
    printf("%p", x1 );
    printf("\n %p", x1 + 1);
    printf("\n %p", x1 + 2);
    printf("\n %p", x1 + 3);

    printf("\n int: \n"); // Intervalos de 4 bytes;
    printf("%p", x2 );
    printf("\n %p", x2 + 1);
    printf("\n %p", x2 + 2);
    printf("\n %p", x2 + 3);

    printf("\n short int: \n"); // Intervalos de 2 bytes;
    printf("%p", x3 );
    printf("\n %p", x3 + 1);
    printf("\n %p", x3 + 2);
    printf("\n %p", x3 + 3);

    printf("\n float: \n"); // Intervalos de 4 bytes;
    printf("%p", x4 );
    printf("\n %p", x4 + 1);
    printf("\n %p", x4 + 2);
    printf("\n %p", x4 + 3);

    printf("\n double: \n"); // Intervalos de 8 bytes;
    printf("%p", x5);
    printf("\n %p", x5 + 1);
    printf("\n %p", x5 + 2);
    printf("\n %p", x5 + 3);



    return 0;
}
