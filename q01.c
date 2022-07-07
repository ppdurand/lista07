/*Escreva um programa que crie uma Estrutura Node com dois campos (x, y) do tipo inteiro. Realize
a leitura e exibi ̧c ̃ao dos dados dessa Estrutura utilizando um ponteiro para essa estrutura.*/

#include <stdio.h>

typedef struct{
    int x, y;
}Node;

int main(){
    Node dados, *p = &dados;

    puts("digite o valor de x: ");
    scanf("%d", &p->x);

    puts("Digite o valor de y: ");
    scanf("%d", &p->y);

    printf("Valor de x: %d\nValor de y: %d", p->x, p->y);
}