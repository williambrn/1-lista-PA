#include <stdio.h>

int main()
{
    int i=2, j=4, *p, *q;

    //p = i; // p recebe o valor inteiro de i (não está sendo representado como ponteiro) Mesmo o código compilando e rodando no codeblocks há um aviso de conversão de inteiro para ponteiro como incompatível;
    //q = &j; // q recebe o endereco de memória de j;
    //p = &*&i; //p recebe o endereco de memória onde está alocado i;
    //i = (*&)j; // O código não compila;
    //i = *&j; // i recebe o conteúdo presente no endereco de memória de j;
    //i = *&*&j; // i recebe o conteúdo presente no endereco de memória de j;
    //q = *p; // Conversão incompatível de ponteiro para inteiro;
    //i = (*p)++ + *q;//Falha de segmentação;


    return 0;
}
