#include <stdio.h>
#include <math.h>
// lista 0 - 1 
// Faça um programa que leia a base e a altura de um
// retângulo e escreva o seu perímetro, a sua
// área e a sua diagonal.

int main(void) {
    float b,a,peri,area,diag;
    
    printf("Digite as dimensões de um retângulo. \n");
    printf("Digite o valor da base: ");
    scanf("%f", &b);
    printf("Digite o valor da altura: ");
    scanf("%f", &a);
    
    // perimetro
    peri = 2*b + 2*a;
    printf("O perímetro do retângulo é %.1f \n",peri);
    
    // area
    area = b*a;
    printf("A área do retângulo é %.1f \n",area);
    
    // diagonal
    diag = sqrt( (a*a) + (b*b));
    printf("A diagonal do retângulo é %.1f \n",diag);
    
    return 0;
}