/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
 /* Faça uma função que some os números inteiros positivos
compreendidos entre A e B. Considere que A < B e que A e B
devem entrar na soma. */

#include <stdio.h>

int somaTermos(int A,int B) {
    printf("%d\n",B);
    if (A>B)
        return 0;
    else
        return (somaTermos(A,B-1)+B);
}


int main()
{
    printf("Hello World\n");
    int teste;
    teste = 20;
    printf("saida para soma de 5 a 20: %d\n", somaTermos(5,teste));
    return 0;
}
