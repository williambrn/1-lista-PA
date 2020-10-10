#include <stdio.h>

int main()
{
    int i=5, *p, k = 4094;

    p = &i;

    printf("%x %d %d %d %d", p, *p+2, **&p, 3**p, **&p+4);



    printf("\n Valor no espaco de memoria 4094 em hexadecimal: %x",k); //Utilizado para converter o valor 4094 para hexadecimal

    return 0;
}
