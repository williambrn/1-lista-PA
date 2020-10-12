#include<stdio.h>
#include<stdlib.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t


int compare (const void * a, const void * b) // Fornece 2 ponteiros que podem assumir qualquer tipo de variável;
{
    return ( *(float*)a - *(float*)b ); // Realiza a operacão a funcão qsort poder comparar. (Um valor negativo, positivo ou igual a zero);
}

int main()
{
    clock_t t; // Variável para armazenar tempo;
    int i, n,j,k; //Variáveis locais da funcão main
    float *x; // Ponteiro float que serve de base para os valores armazenados nele;

    printf("Insira o número valores a serem ordenados: \n");
    scanf("%d",&n);


    x = malloc(n * sizeof(float)); // Alocacão dinâmica para o vetor x de tamanho n;

    printf("Insira os valores a serem ordenados: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%f",&x[i]); // Recebendo os valores para x do usuário;
    }

    t = clock(); //Armazena tempo antes da chamada da funcão
    qsort (x, n, sizeof(float), compare); // Parâmetros da funcão qsort que são: O conjunto de elementos, o número de elementos do conjunto, o tamanho do tipo de variável utilizado e a chamada da funcão compare;
    t = clock() - t; // Tempo final - Tempo inicial;
    printf("\nTempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double
    printf(" milissegundos.\n \n");
    for (k=0; k<n; k++)
        printf ("%f ",x[k]);

    free(x); // Liberando memória alocada para o ponteiro x;

    return 0;
}
