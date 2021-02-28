#include <stdio.h>
#include <math.h>
/* 
lista 0 - 
Criar funcoes para cada item da lista 
main chama elas 
*/

/* 4 */
int p4(void) {
    /* saida: SF = S + 0.04*vendas */
    float salario, vendas, sf;

    printf("Calculo do salario final. \nEntradas: Salario e Vendas \nDigite o valor do salario base: ");
    scanf("%f", &salario);
    printf("Digite o valor das vendas do colaborador: ");
    scanf("%f", &vendas);

    sf = salario + vendas*0.04;
    printf("O Salario final do colaborador e: %.1f \n\n",sf);
    return 0;
}
/* 5 */
int p5(void) {
    /* saida: min = h*60 */
    float min,h;

    printf("Calculo dos minutos a partir do multiplo de hora. \nEntradas: hora\n");
    printf("Exemplo: entrada: 1.5 -> 60(1) + 30(0.5) -> saida 60+30 = 90 minutos. \n");
    printf("Digite o valor da hora:");
    scanf("%f", &h);
    
    min = 60*h;
    printf("Em %f hora(s) temos %.2f minutos.\n\n",h,min);
    return 0;
}

int main(void) {
    int i = 1;
    /* opcoes de programas da lista 0  */
    printf("Ola, bem vindo a lista de progrmas da lista 0. \n");
    while(i!=0) {    
        printf("Opcoes de programas diponiveis:\n");
        printf("1 - Salario final do colaborador. \n");
        printf("2 - Conversao de horas em minutos. \n");
        printf("0 - Para terminar a interacao com os programas\n");

        scanf("%d", &i);
        switch(i) {
            case 1:
                p4();
                break;
            case 2:
                p5();
                break;

            case 0:
                printf("Obrigado por utiliar os programas da lista 0\nTenha um bom dia.\n");
                break;
            default:
                printf(" #----# Operador incorreto. Reveja as opcoes.  #----# \n\n");
        }
    }
    return 0;
}