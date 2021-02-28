#include <stdio.h>
// CALCULA O FATORIAL DE N

int fat(int num) {
    int f = 1, i = num;
    while(i>=1) {
        f *= i;
        i--;
    }
    return f;
}

int main(void) {
    int N;
    printf("Cálculo do fatorial. Insira um inteiro, até 8:");
    scanf("%d",&N);
    while (N>8) {
        printf("Insira um inteiro, até 8:");
        scanf("%d",&N);
    }
    printf("\n\nO fatorial de %d é: %d\n", N, fat(N)); ;
    return 0;
}