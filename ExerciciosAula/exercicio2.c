#include <stdio.h>

int main(void) {
    float b,h,area;
    printf("Digite a base do triândulo: ");
    scanf("%f", &b);
    printf("Digite a altura do triândulo: ");
    scanf("%f", &h);
    area = (b*h)/2;
    printf("A área do triângulo é: %.2f\n", area);
    return 0;
}
