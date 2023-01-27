#include <stdio.h>

// Faça um programa que lê 10 números inteiros e os imprime na ordem inversa.

int main()
{
    int numeros[10];
    
    printf("Digite 10 numeros inteiros: ");
    for(int i=0; i<10; i++) 
        scanf("%d", &numeros[i]);
    
    for(int j=9 ; j>=0; j--)
        printf("%d ", numeros[j]);
        
    return 0;
}
