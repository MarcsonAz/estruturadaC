
/*
Crie uma matriz N x N que representará as amizades entre um grupo de pessoas. 
A matriz AMIZADE é preenchida, em cada posição com o número 0 ou 1. 
O número 1 em uma posição i,j indica que a pessoa i é amiga de j. 
Por outro lado, o número 0 indica que i e j não são amigos. 
Faça um programa que preencha a matriz de amizades e depois verifique se 
existe alguma inconsistência, já que a relação de amizade é recíproca.
Faça uma função que retorne quantas inconsistências existem na matriz.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 4


int fillM(int mat[N][N]) {
    int i,j;
    printf("Digite 0 ou 1 para amizade.");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("\nAmizade de [%d] com [%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
         
}

void showM(int mat[N][N]) {
    int i,j;
    printf("Matriz da amizade.\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
         
}

int testF(int mat[N][N]) {
    int i,j, cont=0;
    
    for(i=0; i<N;  i++){
        for(j=i; j<N; j++){
            if(mat[i][j] != mat[j][i])
                cont++;
        }
        printf("\n");
    }
    return cont;
}


int main(void)
{
    
    int mat[N][N];
    
    fillM(mat);
    printf("%d\n",mat[1][3]);
    
    showM(mat);
    
    printf("Qtd de amizades não recíprocas: %d",testF(mat));
   
    return 0;
}
