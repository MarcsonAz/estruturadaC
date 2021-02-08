#include <stdio.h>
// leitura de tres lados é determina a classificacao se for um triangulo

int main(void) {
    
   float a,b,c;
   
   printf("Digitar 3 lados de um triângulo \n");
   printf("Digite o lado A: ");
   scanf("%f", &a);
   printf("Digite o lado B: ");
   scanf("%f", &b);
   printf("Digite o lado C: ");
   scanf("%f", &c);
   
   if(a + b <= c || a + c <= b || b + c <= a) {
       printf("\nOs valores digitados não formam um triângulo");
   }
   else{
       if(a == b && b == c) {
           printf("É um triângulo equilátero!");
       }
       else {
           if(a == b || b == c || a == c){
               printf("É um triângulo isósceles");
           }
           else {
               printf("É um triângulo escaleno!");
           }
       }
   };
    
    return 0;
}