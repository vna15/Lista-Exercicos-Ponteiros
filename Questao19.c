#include <stdlib.h>
#include <stdio.h>


int multiplicar_matrizes(int linhasA, int colunasA,int colunasB, int **matA, int **matB, int **matC){
      int i,j,k;

      for(i=0;i<linhasA;i++){
        for(j=0;j<colunasA;j++){
            matA[i][j] = rand()%3;
            printf("%d\t",matA[i][j]);
        }
        printf("\n");
      }

      for(i=0;i<linhasA;i++){
        for(j=0;j<colunasB;j++){
            matB[i][j] = rand()%3;
            printf("%d\t",matB[i][j]);
        }
        printf("\n");
      }

      for (i=0;i<linhasA;i++){
        for (j=0;j<colunasB;j++){
            matC[i][j] = 0;
            for(k=0;k<linhasA;k++){
               matC[i][j] += matA[i][k] * matB[k][j];
               printf("%d\t",matC[i][j]);
            }
        }
        printf("\n");
      }
}


int main()
{
      int **matA, **matB, **matC, linhasA, colunasA, colunasB, i,j;
      printf("Digite o número de linhas da matriz A");
      scanf("%d",&linhasA);
      printf("Digite o número de colunas da matriz A");
      scanf("%d",&colunasA);
      printf("Digite o número de colunas da matriz B");
      scanf("%d",&colunasB);

      matA = (int **)malloc(sizeof(int)*linhasA);

      for (i=0;i<linhasA;i++)
          matA[i] = (int *)malloc(sizeof(int)*colunasA);

      matB = (int **)malloc(sizeof(int)*linhasA);

      for (i=0;i<linhasA;i++)
          matB[i] = (int *)malloc(sizeof(int)*colunasB);

      matC = (int **)malloc(sizeof(int)*linhasA);

      for (i = 0;i<linhasA;i++)
          matC[i] = (int *)malloc(sizeof(int)*colunasB);

      multiplicar_matrizes(linhasA,colunasA,colunasB,matA,matB,matC);

      return 0;
}

