#include <stdio.h>

// Escreva um Programa que receba a idade de 10 pessoas, calcule e imprima a
// quantidade de pessoas maiores de idade (idade >= 18 anos).

int main()
{
    int idades[10], count = 0;
    
    printf("Insira 10 idades:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &idades[i]);
        if(idades[i]>=18){
            count = count + 1;
        }
    }
    
    printf("Ha %d pessoas maiores de idade", count);
    
    return 0;
}
