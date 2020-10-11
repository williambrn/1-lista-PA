#include <stdio.h>

int func(int x) // Funcão que retorna o dobro do valor atribuido a x;
{
    return x*2;
}

int main()
{
    int x;
    int (*pf)(int) = func; // ou &func; Declaracão de um ponteiro que recebe uma funcão inteira e retorna um inteiro;
    printf("Insira um inteiro: \n");
    scanf("%d",&x); // Atribui a variável x o inteiro digitado;
    printf("\nO dobro é %d",pf(x));// imprime a func(x) utilizando a chamada do ponteiro de funcões;

    return 0;
}
