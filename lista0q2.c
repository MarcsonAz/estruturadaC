#include <stdio.h>

// lista 0 - 2 
// Faça um programa que escreva quanto um consumidor deverá
// pagar na sua conta de luz. Os dados de entrada do
// algoritmo devem ser: o nome do consumidor, o seu consumo
// mensal em KW, e o preço equivalente a 1 KW.

int main(void) {
    char nome[30];
    float consumo,preco,pfinal;
    
    printf("Custo estimado da conta de luz. \n");
    printf("Digite as informações pedidas a seguir. \n");
    
    printf("Digite o nome do cliente: ");
    scanf("%s", &nome);
    
    printf("Digite o valor por KW: ");
    scanf("%f", &preco);
    
    printf("Digite o consumo do mês em KW: ");
    scanf("%f", &consumo);
    
    // perimetro
    pfinal = preco*consumo;
    printf("O preço estimado da conta do cliente %s, será: %.2f",nome,pfinal);
    
    
    return 0;
}