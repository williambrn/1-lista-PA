#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float compare(float a,float b) //Compara 2 valores e retorna para a funcão newsort;
{
    if(a < b)
        return -1;
    if(a >= b)
        return 1;
}

float newsort(float v[], int n, float(*f)(float)) // Método semelhante ao Selection Sort
{
    int i,j,min;
    float aux;

    for(i = 0; i < n - 1; i++)
    {
         min = i;
         for(j = i + 1; j < n; j++)
         {
            if(compare(v[j],v[min]) < 0)
                min = j;
         }
         aux = v[i];
         v[i] = v[min];
         v[min] = aux;
    }
}


int main()
{
    int n, j,i;
    float *x;

    printf("Insira o número valores a serem ordenados: \n");
    scanf("%d",&n);

    x = malloc(n * sizeof(float));

    printf("Insira os valores a serem ordenados: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%f",&x[i]); // Recebendo os valores para x do usuário;
    }

    newsort(x,n,compare);

    printf("Valores ordenados:  \n");

    for(j = 0; j < n; j++)
    {
        printf(" %f",x[j]);// Imprimindo os valores de x;
    }

    free(x); // Liberando memória alocada para o ponteiro x;

    return 0;

}
