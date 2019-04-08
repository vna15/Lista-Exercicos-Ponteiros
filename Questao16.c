#include <stdlib.h>
#include <stdio.h>

int comparacao(a, b)
void *a, *b;
{
    if (*(int*)a > *(int*)b)
    {
        return 1;
    }
    else if (*(int*)a == *(int*)b)
    {
        return 0;
    }
    else if (*(int*)a < *(int*)b)
    {
        return -1;
    }
}

int main( void )
{
    int tamanho = 40;
    int *vetor = (int *) malloc(sizeof(int)*tamanho);
    int aux;

    for (aux = 0; aux < tamanho; aux++)
    {
        vetor[aux] = random()%tamanho;
    }
    printf("Vetor desordenado:");
    for (aux = 0; aux < tamanho; aux++)
    {
        printf("%3d",vetor[aux]);
    }
    printf("\n");

    qsort(vetor, (size_t) tamanho, sizeof(int), comparacao);

    printf("Vetor ordenado:\n");
    for (aux = 0; aux < tamanho; aux++)
    {
        printf("%3d",vetor[aux]);
    }
    printf("\n");

    return 0;
}
