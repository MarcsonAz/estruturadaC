#include <stdio.h>
// SOMA OS MULTIPLOS DE N MENORES DO QUE 200 e MAIORES DO QUE 100

int main(void) {
    int N, soma = 0, mult;
    int resto;
    
    printf("Digite um valor para N: ");
    scanf("%d", &N);
    resto = 100 % N;
    mult = 100 + (N - resto);
    
    while (mult < 200) {
        soma = soma + mult;
        mult = mult + N;
    }
    printf("O somatório dos múltiplos de %d > 100 e < 200 é: %d\n", N, soma);
    
    return 0;
}
