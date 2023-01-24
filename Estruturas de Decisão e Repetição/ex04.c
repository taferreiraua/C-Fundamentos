#include <stdio.h>

// Escreva um Programa que receba um conjunto de valores inteiros e positivos, calcule
// e imprima o maior e o menor valor do conjunto. Para encerrar a entrada de dados,
// deve ser digitado o valor zero. Para valores negativos, deve ser enviada uma
// mensagem. Esses valores (zero e negativos) não entrarão nos cálculos.

int main() {
    
    int qnt, num, aux;
    
    printf("Quantos numeros deseja inserir?\n");
    scanf("%d", &qnt);
    
    int numeros[qnt];
    
    printf("Insira valores inteiros positivos:\n");
    for(int h=0; h<qnt; h++){
        scanf("%d", &numeros[h]);
        if(numeros[h] < 0){
            printf("O valor inserido não é um inteiro positivo! Insira novamente:\n");
            scanf("%d", &numeros[h]);
        } 
    }
    
    for(int i=1; i<(qnt-1); i++) {
        for(int j=1; j<(qnt-1-i); j++){
            if(numeros[j] < numeros[j+1]){
                aux = numeros[j+1];
                numeros[j+1] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    
    printf("Menor valor = %d\nMaior valor = %d", numeros[0], numeros[qnt-1]);
    
    return 0;
}
