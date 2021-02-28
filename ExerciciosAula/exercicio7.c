#include <stdio.h>
// CALCULA O FATORIAL DE N
int main(void) {
    int i, fat, N;
    fat = 1;
    
    printf("Digite um valor para N: ");
    scanf("%d", &N);
    for (i=1; i <= N; i++)
        fat = fat * i;
    
    printf("\n\nO fatorial de %d é: %d\n", N, fat);
    
    return 0;
}
