#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int x[], int y[], int result[], int n) // Funcão que recebe os vetores e seus respectivos tamanhos e escrevem em result a soma deles;
{
    int i;
    for(i=0; i < n; i++)
    {
        result[i] = x[i] + y[i]; // Soma feita elemento por elemento de cada vetor;
    }

}

int main()
{

    int *x, *y, *result, n, j,k,i; // Declaracão das variáveis necessárias para o programa;


    //Entrada do tamanho dos vetores definido pelo usuário;

    printf("Insira o tamanho dos vetores a serem somados: \n");
    scanf("%d",&n);

    // Alocacão de memória dinâmica para os vetores necessários.

    x = malloc(n * sizeof(int));
    y = malloc(n * sizeof(int));
    result = malloc(n * sizeof(int));


    //Entrada dos valores do vetores pelo usuário;

    printf("Insira os valores do primeiro vetor: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("Insira os valores do segundo vetor: \n");

    for(j=0; j < n; j++)
    {
        scanf("%d",&y[j]);
    }


    soma(x,y,result,n); // Chamada da funcão com os parâmetros pedidos na questão;


    printf("\nSoma dos vetores: \n"); // Impressão do vetor result, onde a soma dos vetores está guardada;
    for(k=0; k < n; k++)
    {
        printf("%d ",result[k]);
    }

    // Liberacão da memória alocada para cada variável;

    free(result);
    free(y);
    free(x);

    return 0;
}
