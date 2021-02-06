#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    // declaracao de variaveis
    int num;
    int x=10, y=5, z=7;

    // processamento
    num = 10;
    printf("Valor inicial: %d \n", num);

    num +=12;
    printf("Somando 12, temos: %d \n", num);

    num -=1;
    printf("Subitraindo 1, temos: %d \n", num);

    num *=3;
    printf("Multiplicando por 3, temos: %d \n", num);

    num /=7;
    printf("Dividindo por 7, temos: %d \n", num);

    printf("Dividindo por 4, temos somente e parte inteira: %d \n", num/4);
    num %=4;
    printf("E, temos o resto: %d \n", num);

    printf("\n");
    
    printf("Testando operadores de comparação \n");
    printf("\n");
    printf("Se retornar 0 é falso, se retornar 1 é verdadeiro");
    printf("\n");

    printf("Valor de X: %d; Valor de Y: %d \n",x,y);
    
    printf("Exemplos: \n");
    printf(" X > Y  -> %d ///// 10 É MAIOR 5     -> VERDADEIRO \n", x>y);
    printf(" X < Y  -> %d ///// 10 É MENOR 5     -> FALSO \n", x<y);
    printf(" X == Y -> %d ///// 10 É IGUAL 5     -> FALSO \n", x==y);
    printf(" X != Y -> %d ///// 10 É DIFERENTE 5 -> VERDADEIRO \n", x!=y);
    printf("\n");

    printf("Testando operadores lógicos \n");
    printf("&& -> (E) // || ->  (OU) // ! ->  (NÂO) \n");

    printf(" X > Y && X != Y -> %d ///// VERDADEIRO E VERDADEIRO \n", x>y && x!=y);
    printf(" X < Y && X != Y -> %d ///// FALSO E VERDADEIRO \n", x<y && x!=y);
    printf(" X < Y && X == Y -> %d ///// FALSO E FALSO \n", x<y && x==y);

    printf(" X > Y || X != Y -> %d ///// VERDADEIRO OU VERDADEIRO \n", x>y || x!=y);
    printf(" X < Y || X != Y -> %d ///// FALSO OU VERDADEIRO \n", x<y || x!=y);
    printf(" X < Y || X == Y -> %d ///// FALSO OU FALSO \n", x<y || x==y);

    printf(" !(X > Y) -> %d ///// NÃO VERDADEIRO \n", !(x>y));
    printf(" !(X < Y) -> %d ///// NÃO FALSO \n", !(x<y));

    system("pause");
    return 0;
} 