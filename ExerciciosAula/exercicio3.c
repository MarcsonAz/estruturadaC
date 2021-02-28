#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);
    printf("Digite um valor para C: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("\n\n %d é o maior valor\n",a);
    else
        if (b > c)
            printf("\n\n %d é o maior valor\n",b);
        else
            printf("\n\n %d é o maior valor\n",c);
    return 0;
}
