#include <iostream>



using namespace std;





int main(){



    float aloha[10], coisas[10][5], *pf, value = 2.2;

    int i=3;





    aloha[2] = value;

    scanf("%f", &aloha);

    aloha = "value"; // Erro de tipo, enquanto aloha é um número flutuante "value" é uma string do tipo char.

    printf("%f", aloha);

    coisas[4][4] = aloha[3];

    coisas[5] = aloha; // Erro de semântica INVÁLIDO

    pf = value; //Erro de tipo, enquanto 'pf' é um ponteiro, 'value' é um float.

    pf = aloha;





  }
