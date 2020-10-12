#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

    order(x,n);

    printf("Valores ordenados:  \n");
    for(j = 0; j < n; j++)
    {
        printf(" %f",x[j]);// Imprimindo os valores de x;
    }

    free(x); // Liberando memória alocada para o ponteiro x;

    return 0;
}
