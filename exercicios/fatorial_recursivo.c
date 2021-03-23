/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
 /* Calcular fatorial de N */

#include <stdio.h>

int fatorial(int N) {
    printf("%d\n",N);
    if(N==0) 
        return 1;
    else
        return (fatorial(N-1)*N);
}


int main()
{
    printf("Hello World\n");
    int teste;
    teste = 5;
    printf("saida para 5!: %d\n", fatorial(teste));
    return 0;
}
