#include <stdio.h>
// SOMA OS MULTIPLOS DE N MENORES DO QUE 200

int main(void) {
    int N, soma = 0, mult;
    
    printf("Digite um valor para N: ");
    scanf("%d", &N);
    mult = N;
    while (mult < 200) {
        soma = soma + mult;
        mult = mult + N;
    }
    printf("O somatório dos múltiplos de %d menores que 200 é: %d\n", N, soma);
    
    return 0;
}
