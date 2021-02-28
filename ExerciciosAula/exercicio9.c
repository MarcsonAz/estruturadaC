#include <stdio.h>

int main(void) {
    int T1, T2, T3, N;
    
    do {
        printf("Digite um valor para N (>=1): ");
        scanf("%d", &N);
    } while (N < 1);
    
    T1 = 0;
    T2 = 1;
    printf("\n\n%d %d ", T1, T2);
    T3 = T1 + T2;
    while (T3 < N) {
        printf("%d ", T3);
        T1 = T2;
        T2 = T3;
        T3 = T1 + T2;
    }
    return 0;
}
