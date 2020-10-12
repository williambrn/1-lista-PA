#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t


float order(float v[],int n) //Funcao de ordenamento seguindo o método Insertion Sort;
{
    int i, j;
    float aux, x;

    for(i = 0; i < n; i++)
    {
        x = v[i];
        j = i - 1;
        while(j>=0 && v[j] > x)
        {
            v[j+1] = v[j];
            j = j-1;
        }
        v[j+1] = x;
    }

}

int main()
{
    clock_t t; // Variável para armazenar tempo;

    int i, n,j;
    float *x;

    printf("Insira o número valores a serem ordenados: \n");
    scanf("%d",&n);


    x = malloc(n * sizeof(float)); // Alocacão dinâmica para o vetor x de tamanho n;

    printf("Insira os valores a serem ordenados: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%f",&x[i]); // Recebendo os valores para x do usuário;
    }

    t = clock(); //Armazena tempo antes da chamada da funcão
    order(x,n);
    t = clock() - t; // Tempo final - Tempo inicial;

    printf("\nTempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double
    printf(" milissegundos.");

    printf("\nValores ordenados:  \n");
    for(j = 0; j < n; j++)
    {
        printf(" %f",x[j]);// Imprimindo os valores de x;
    }

    free(x); // Liberando memória alocada para o ponteiro x;

    return 0;
}
