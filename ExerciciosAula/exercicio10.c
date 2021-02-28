#include <stdio.h>

int main(void) {
    int i, N, soma3 = 0, cont3 = 0, soma2 = 0, num;
    
    printf("Digite um valor para N: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
        printf("\n Digite um número: ");
        scanf("%d", &num);
        if (num%2 == 0)
            soma2 += num;
        if (num%3 == 0) {
            soma3 += num;
            cont3++;
        }
    }
    printf("\n\nA soma dos números pares é: %d", soma2);
    printf("\n\nA média dos mult de 3 é: %f", soma3/(cont3*1.0));
    return 0;
}
