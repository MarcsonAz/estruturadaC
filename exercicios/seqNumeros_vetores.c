#include <stdio.h>
#define TAM 4

/*  Ler 4 números inteiros e depois imprimí-los na ordem
contrária em que foram lidos.  */ 

int main (void) {
    int i, vetor[TAM];
    
    // lendo e armazenando os valores
    for (i=0; i<TAM; i++) {
        printf("Digite um número inteiro:");
        scanf("%d", &vetor[i]);
    }
    // loop invertido
    for (i=(TAM-1); i>=0; i--)
        printf("%d\n",vetor[i]);
        
    return 0;
}


