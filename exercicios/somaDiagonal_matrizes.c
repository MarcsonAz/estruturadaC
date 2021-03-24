/* SOMA DA DIAGONAL DE UMA MATRIZ */

#include <stdio.h>
#define N 3

void preencheMatriz(int mat[N][N]){
    
    int i,j;
    
    printf("\n\nPreenchendo a Matriz\n");
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            printf("Digite a posicão [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void escreveMatriz(int mat[N][N]){
    int i,j;
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int somaDiagonalPrincipal(int mat[N][N]){
    
    int i,soma=0;
    for (i=0; i<N; i++) {
        soma = soma + mat[i][i];
    }
    return soma;
}


int main(void) {
    
    int mat[N][N], soma;
    preencheMatriz(mat);
    printf("\n\nA matriz:\n\n");
    escreveMatriz(mat);
    
    soma = somaDiagonalPrincipal(mat);
    printf("\n\nA soma da diaginal principal é: %d", soma);
    
    
    return 0;
}