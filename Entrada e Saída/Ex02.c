#include <stdio.h>

// Faça um programa que leia três números inteiros, determine e imprima o menor deles.

int main()
{
    int x, y, z, aux;
    
    printf("Insira 3 numeros inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);

    if(x > z){
        aux = z;
        z = x;
        x = aux;
    }
    
    if(x > y){
        aux = y;
        y = x;
        x = aux;
    }
    
    if(y > z){
        aux = z;
        z = y;
        y = aux;
    }
    
    printf("Menor numero: %d", x);
    
    return 0;
}
