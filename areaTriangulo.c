#include <stdio.h>

int main(void) {
    
   float alt, base, area;
    
    printf("Digite a base e a altura para calcular a área do triangulo \nDigite a base: ");
    scanf("%f", & base);
    
    printf("Digite a altura: ");
    scanf("%f", &alt);
    
    
    area = ( base*alt ) / 2;
    
    printf("A média arimtimética é: %.2f", area);
    
    return 0;
}