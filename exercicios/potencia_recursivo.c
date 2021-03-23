/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
 /* Faça uma função que calcule Xn, sendo N ≥ 0. */

#include <stdio.h>

int potencia(int X,int N) {
    printf("%d\n",N);
    if (X==0)
        return 0;
    if(N==0) 
        return 1;
    else
        return (potencia(X,N-1)*X);
}


int main()
{
    printf("Hello World\n");
    int teste;
    teste = 5;
    printf("saida para 2^5: %d\n", potencia(2,teste));
    return 0;
}
