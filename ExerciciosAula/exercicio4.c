#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);
    printf("Digite um valor para C: ");
    scanf("%d", &c);
    if (a + b <= c || a + c <= b || b + c <= a)
        printf("\nOs valores digitados não formam um triângulo");
    else
        if (a == b && b == c)
            printf("\n\n O triângulo é equilátero\n");
        else
            if (a == b || b == c || a == c)
                printf("\n\n O triângulo é isósceles\n");
            else
                printf("\n\n O triângulo é escaleno\n");
    return 0;
}
