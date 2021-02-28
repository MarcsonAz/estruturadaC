#include <stdio.h>
// CALULAR O VALOR DE E
int main(void) {
    int i, fat, N;
    float E = 1.0;
    fat = 1;
    
    printf("Digite um valor para N: ");
    scanf("%d", &N);

    for (i=1; i <= N; i++) {
        fat = fat * i;
        E = E + (1.0/fat);
    }
    
    printf("\n\nO valor de E é: %f\n", E);
    
    return 0;
}
