#include <stdio.h>

//  Faça um Programa que receba a idade e a altura de várias pessoas. Calcule e imprima
// a média das alturas das pessoas com mais de 50 anos. Para encerrar a entrada de
// dados, digite idade < zero.

int main()
{
    int idade[] = {};
    float altura[] = {};
    int i = 1;
    float sumId = 0, sumAl = 0, size = 0;
    
    printf("Preencha os campos e digite uma idade menor ou igual que zero para encerrar.\n");
    
    while(i > 0){
        i = i - 1; // "consertando" o indice
        
        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);
        
        if(idade[i] < 0) {
            printf("Media de idade: %.2f\nMedia de altura: %.2f", sumId/size, sumAl/size);
            i = 0;
        } else {
            
        printf("Digite sua altura: ");
        scanf("%f", &altura[i]);
        
        size = size + 1; // atualizando o tamanho dos vetores
        sumId = sumId + idade[i]; // calculando a media das idades
        sumAl = sumAl + altura[i]; // calculando a media das alturas
        
        i = i + 1;
        }
    }
    
    return 0;
}
