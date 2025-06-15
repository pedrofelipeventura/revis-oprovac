/*
Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros.
*/

#include <stdio.h>

int main(){

int x, y, *px, *py, c = 0, *pc = 0;

puts("Digite o valor de x:");
scanf("%d", &x);
puts("Digite o valor de y:");
scanf("%d", &y);

px = &x;
py = &y;
pc = &c;

pc = px;
px = py;
py = pc;

    printf("Valor de x: %d, Valor de y: %d, Endereço de x = [%p], y = [%p]", *px, *py , px, py);

    return 0;
}
