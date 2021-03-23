/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
 /* Calcular o produto dos números inteiros positivos ímpares menores
ou iguais a N */

#include <stdio.h>

int produto(int N) {
    printf("%d",N);
    if(N==1) 
        return 1;
    else
        return (produto(N-2)*N);
}


int main()
{
    printf("Hello World");
    int teste;
    teste = 7;
    printf("saida para 7: %d", produto(teste));
    return 0;
}
