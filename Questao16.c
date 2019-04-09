#include <stdlib.h>
#include <stdio.h>

int comparacao(a, b)
int *a, *b;
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

int main()
{
    int tamanho = 40;
    int *vetor = (int *) malloc(sizeof(int)*tamanho);
    int i;

    for (i=0;i<tamanho;i++)
    {
        vetor[i] = rand()%tamanho;
    }
    printf("Vetor desordenado:");
    for (i=0;i<tamanho;i++)
    {
        printf("%3d",vetor[i]);
    }
    printf("\n");

    qsort(vetor, (size_t) tamanho, sizeof(int), comparacao);

    printf("Vetor ordenado:\n");
    for (i=0;i<tamanho;i++)
    {
        printf("%3d",vetor[i]);
    }
    printf("\n");

    return 0;
}
