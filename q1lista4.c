/*
Escreva um programa que adicione dois n ́umeros usando ponteiros. Al ́em do valor da soma, imprima
tamb ́em o endere ̧co de mem ́oria onde o valor resultante dessa soma est ́a armazenado.
*/

#include <stdio.h>

int main(){

int x, y, c, *px, *py, *pc;
puts("Digite o valor de x:");
    scanf("%d", &x);
puts("Digite o valor de y:");
    scanf("%d", &y);

px = &x;
py = &y;
c = *px + *py;
pc = &c;

printf("Valor de x: %d, Valor de y: %d, Soma: %d, Endereço: %p", *px, *py, *pc, pc );

return 0;
}
