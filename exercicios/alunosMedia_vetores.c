#include <stdio.h>

/*  Ler N notas dos alunos de uma turma e calcular a média.
Ao final imprimir a quantidade de alunos que ficou acima
da média calculada.  */ 

float med(int *vet) {
    int i, soma = 0;
    float saida = 0;
    for (i=0; i<TAM; i++)
        soma += vet[i];
        
    saida = soma/(TAM*1.0);
    return saida;
}


int main (void) {
    int i, tam;
    float media = 0;
    // descobrindo o tamanho do vetor
    printf("Digite o número de alunos: ");
    scanf("%d", &tam);
    int vetor[tam];
    // lendo e armazenando os valores
    for (i=0; i<tam; i++) {
        printf("Digite uma nota: ");
        scanf("%d", &vetor[i]);
    }
    media = med(vetor);
    
    // contar acima e abaixo
    int acima = 0, abaixo = 0;
    
    for (i=0; i<tam; i++){
        if(vetor[i]>=media)
            acima ++;
        else
            abaixo++;
    }
    printf("A média é %.2f.\n",media);
    printf("Temos %d aluno(s) acima da média\n",acima);
    printf("Temos %d aluno(s) abaixo da média\n",abaixo);
        
    return 0;
}


