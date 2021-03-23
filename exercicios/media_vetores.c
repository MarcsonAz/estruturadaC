#include <stdio.h>
#define TAM 3


/* FUNCAO MINHA PARA MEDIA DE VETOR  */
// pode ser:  float med(int *vet) { COM PONTEIRO
float med(int vet[TAM]) {
    int i, soma = 0;
    float saida = 0;
    for (i=0; i<TAM; i++)
        soma += vet[i];
        
    saida = soma/(TAM*1.0);
    return saida;
}

/*  MEDIA VETOR DE INTEIROS PROFESSORA */

int main (void) {
    int i, soma=0, vetor[TAM];
    float media = 0;
    // lendo e armazenando os valores
    for (i=0; i<TAM; i++) {
        printf("Digite um número inteiro:");
        scanf("%d", &vetor[i]);
    }
    // calculando a média dos números do vetor
    for (i=0; i<TAM; i++)
        soma += vetor[i];
        
    media = soma/(TAM*1.0);
    printf("A média é: %.2f\n\n", media);
    printf("A média com funcao é: %.2f", med(vetor));
    return 0;
}


