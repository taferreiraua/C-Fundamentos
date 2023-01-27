#include <stdio.h>

// Implemente uma busca que diz se um elemento está presente ou não em um vetor

int main()
{
    int n, vetor[n], elemento, achei=0;
    
    printf("Quantos elementos deseja adicionar ao vetor?\n");
    scanf("%d", &n);
    
    printf("Digite os numeros: \n");
    for(int i=0; i<n; i++) 
        scanf("%d", &vetor[i]);
    
    printf("Qual elemento deseja buscar?\n");
    scanf("%d", &elemento);
    
    for(int j=0; j<n; j++)
        if(vetor[j]==elemento)
            achei = 1;
            
    if(achei==1)
        printf("O elemento está presente no vetor!");
    else
        printf("O elemento não está presente no vetor!");
        
        
    return 0;
}
