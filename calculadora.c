#include <stdio.h>

int calculadora() {
   int num1, num2, rtd, tipo, continua;
   int valido1 = 0, valido2 = 0, valido3 = 0;
   
    printf("Por favor insira 2 números (ex: 10 e 5)\n");
    
while (valido1 == 0) {
    if (scanf("%d %d", &num1, &num2) == 2) {
        valido1 = 1;
    } else {
        printf("ERRO1: Digite apenas números\n");
        while (getchar() != '\n'); // Limpeza do buffer OBRIGATORIA para letras/palavras
     }
}

    printf("Qual o tipo da operação \n1 Soma, 2 Subtração, 3 Divisão, 4 Multiplicação\n");
while (valido2 == 0) {
    if (scanf("%d", &tipo) == 1 && tipo >= 1 && tipo <= 4) {
        valido2 = 1;
    } else {
        printf("ERRO 2: Digite apenas 1, 2, 3 ou 4.\n");
        while (getchar() != '\n');
     }
}
    switch (tipo) {
        case 1:
         rtd = num1+num2;
         break;
        case 2:
         rtd = num1-num2;
         break;
        case 3:
         if (num2 == 0) {
            printf("ERRO 0: Não é possível dividir por 0.\n");
            rtd = 0;
         } else {
            rtd = num1/num2;
         }
         break;
        case 4:
         rtd = num1*num2;
         break;
        default:
         printf("Opção invalida");
    }
    
   printf("O resultado é %d \nVocê quer continuar? 1 Sim, 0 Não\n", rtd); 
while (valido3 == 0) {
    if (scanf("%d", &continua) == 1 && (tipo == 1 || tipo == 2)) {
        valido3 = 1;
    } else {
        printf("ERRO 3: Digite apenas 1 ou 0.\n");
        while (getchar() != '\n');
     }
}
    
return continua;
}

int main() {
 int ativa = 1;
 
 printf("///Boas vindas a calculadora da Nikki///\n");
 
 while (ativa == 1) {
 ativa = calculadora();
 }

  printf("Tchau, até a próxima");

   return 0;
}