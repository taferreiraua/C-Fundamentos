#include <stdio.h>

//  Faça um programa que leia dois valores inteiros. A seguir, calcule o produto entre
// estes dois valores e atribua esta operação à variável PROD. A seguir imprima o valor
// da variável PROD, por exemplo, PROD = 27

int main()
{
    int x, y, prod;
    
    printf("Insira 2 numeros inteiros:\n");
    scanf("%d %d", &x, &y);

    prod = x*y;
    
    printf("prod = %d", prod);
    
    return 0;
}
