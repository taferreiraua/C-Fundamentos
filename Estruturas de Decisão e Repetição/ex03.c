#include <stdio.h>

// Escreva um Programa que receba a idade de 15 pessoas, calcule e imprima a
// quantidade de pessoas em cada faixa etária; a porcentagem de cada faixa etária em
// relação ao total de pessoas. As faixas etárias são:
//  1 a 15 anos;
//  16 a 30 anos;
//  31 a 45 anos;
//  46 a 60 anos;
//  >= 61 anos.

int main() {
    
    int idades[15];
    int F1 = 0;
    int F2 = 0;
    int F3 = 0;
    int F4 = 0;
    int F5 = 0;
    
    printf("Insira 15 idades:\n");
    for(int i=0; i<15; i++){
        scanf("%d", &idades[i]);
        
        if(idades[i] >= 1 && idades[i] <= 15){
            F1 = F1 + 1;
        } else if(idades[i] >= 16 && idades[i] <= 30){
            F2 = F2 + 1;
        } else if(idades[i] >= 31 && idades[i] <= 45){
            F3 = F3 + 1;
        } else if(idades[i] >= 46 && idades[i] <= 60){
            F4 = F4 + 1;
        } else{
            F5 = F5 + 1;
        }
    }
    
    printf("1 a 15 anos -> %d;\n 16 a 30 anos -> %d;\n 31 a 45 anos -> %d;\n 46 a 60 anos -> %d;\n >= 61 anos -> %d.\n", F1, F2, F3, F4, F5);
    
    return 0;
}
