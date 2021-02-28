#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    // declaracao de variaveis
    float nota1, nota2, media; 

    // entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    // processamento
    media = (nota1 + nota2) / 2;

    //saida
    printf("Média do aluno = %.1f\n", media);

    system("pause");
    return 0;
} 