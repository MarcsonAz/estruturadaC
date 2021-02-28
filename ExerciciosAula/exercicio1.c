#include <stdio.h>

int main(void) {
    float n1,n2,n3, media;
    printf("Digite as notas dos alunos\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1+n2+n3)/3;
    printf("A média é: %.2f", media);
    return 0;
}
