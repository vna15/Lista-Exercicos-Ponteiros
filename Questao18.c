#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int *vet1, int *vet2, int* vet3, int tamanho){
    int *p1, *p2, *p3, i;
    for(i=0;i<tamanho;i++){
        vet1[i] = rand()%tamanho;
        vet2[i] = rand()%tamanho;
    }
    p1 = vet1;
    p2 = vet2;
    p3 = vet3;
    for(i=0;i<tamanho;i++){
        *p3 = *p1 + *p2;
        p1++;
        p2++;
        p3++;
    }
    for(i=0;i<tamanho;i++){
        printf("\tvet1[%d] = %d", i, vet1[i]);
        printf("\tvet2[%d] = %d", i, vet2[i]);
        printf("\tvet3[%d] = %d", i, vet3[i]);
        printf("\n");
    }

}
int main(){
     int tamanho, vet1[200], vet2[200], vet3[200];
     printf("Digite o tamanho do vetor\n");
     scanf("%d",&tamanho);
     soma_vetor(vet1,vet2,vet3,tamanho);
     return 0;
}
