
/*
Faça um programa que leia uma cadeia de caracteres em formato de data: DD/MM/AAAA
Crie uma função que receba esta data como parâmetro e que retorne o dia, o mês e o
ano em três variáveis inteiras distintas. Escreva os valores retornados no programa principal.
Crie uma função que receba o ano como parâmetro e retorne se a data ocorreu em um ano bissexto.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void separaData(char *dob, int *dia, int *mes, int *ano) {
    
    char D[3], M[3], A[5];
     /*
    D[0] = dob[0]; // primeiro elemento do dia
    D[1] = dob[1];
    M[0] = dob[3];
    M[1] = dob[4];
    A[0] = dob[6];
    A[1] = dob[7];
    A[2] = dob[8];
    A[3] = dob[9];
    */
    // OU

    strncpy(D, dob, 2);
    D[2] = '\0';
    dob = &dob[3];
    
    strncpy(M, dob, 2);
    M[2] = '\0';
    dob = &dob[3];
    
    strncpy(A, dob, 4);
    A[4] = '\0';
 
    printf("\nDia %s",D);
    printf("\nMês %s",M);
    printf("\nAno %s",A);


    *dia = atoi(D);
    *mes = atoi(M);
    *ano = atoi(A);
}

int isB(int ano) {
    if( ano%4 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    char dob[10];
    int dia, mes, ano;
    printf("Entrada de data de nascimento:");
    
    scanf("%s",dob);
    
    separaData(dob, &dia, &mes, &ano);
    //printf("\n%s",dob);
    printf("\nA data é : %d - %d - %d", dia, mes, ano);
    
    if(isB(ano))
        printf("\nO ano é Bissexto!");
    else
        printf("\nO ano não é Bissexto.");

    return 0;
}
