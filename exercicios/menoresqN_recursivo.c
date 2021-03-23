/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
 /* Faça uma função que escreva os números pares menores ou iguais a N */

#include <stdio.h>

int mostraTermosPares(int N) {
    if(N==0){
        printf("%d\n",N);
         return 0;
    }
    else{
        if (N%2==0) {
            printf("%d\n",N);
            return (mostraTermosPares(N-1));
        }
        else
            return (mostraTermosPares(N-1));
    }
}


int main()
{
    printf("Hello World\n");
    int teste;
    teste = 20;
    mostraTermosPares(teste);
    printf("saida de pares menores q 20.");
    return 0;
}
