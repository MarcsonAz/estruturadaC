#include <stdio.h>

int main(void) {
    
   float nota1,nota2,nota3,media;
    
    printf("Digite as notas para calcular a média aritimética \nDigite a Primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a Segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a Terceira nota: ");
    scanf("%f", &nota3);
    
    media = ( nota1+nota2+nota3 ) / 3;
    
    printf("A média arimtimética é: %.1f", media);
    
    return 0;
}