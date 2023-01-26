#include <stdio.h>

// Faça um Programa que receba a idade e a altura de várias pessoas. Calcule e imprima
// a média das alturas das pessoas com mais de 50 anos. Para encerrar a entrada de
// dados, digite idade < zero.

int main()
{
    int idade=0, size=0;
    float altura, sumAlt, media;
    
    while(idade >= 0){
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if(idade > 50){
            printf("Digite sua altura: ");
            scanf("%f", &altura);
        
            size = size + 1;
            sumAlt = sumAlt + altura;
            media = sumAlt/size;
        }
    }
    
    printf("Media de altura das pessoas com mais de 50 anos: %.2f", media);

    return 0;
}
