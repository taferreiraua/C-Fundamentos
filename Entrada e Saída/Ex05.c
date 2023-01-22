#include <stdio.h>

//  Faça um programa que leia quatro valores inteiros A, B, C e D. A seguir, calcule e
// mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula:
// DIFERENCA = (A * B - C * D). A seguir imprima o valor da variável DIFERENCA,
// por exemplo, DIFERENCA = -26

int main()
{
    int a, b, c, d, dif;
    
    printf("Insira 4 numeros inteiros:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    dif = (a*b - c*d);
    
    printf("diferenca = %d", dif);
    
    return 0;
}
