#include <stdio.h>

// Cada espectador de um cinema respondeu a um questionário no qual constava sua
// idade e a sua opinião em relação ao filme: ótimo - 3, bom - 2, regular - 1 Faça uma
// Programa que receba a idade e a opinião de 15 espectadores, calcule e imprima:
//  > a média das idades das pessoas que responderam ótimo
//  > a quantidade de pessoas que responderam regular
//  > a porcentagem de pessoas que responderam bom entre todos os espectadores analisados.

int main()
{
    int idade, resp;
    int qntReg=0, sumBom=0, sizeOtimo=0, sumOtimo=0;
    float mediaOtimo=0;
    float percBom=0;

    for(int i=0; i<15; i++) {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        
        printf("Qual a sua opiniao sobre o filme?\n");
        printf(" (1) Regular\n (2) Bom\n (3) Otimo\n-->");
        scanf("%d", &resp);

        if(resp == 3) {
            sizeOtimo = sizeOtimo + 1; // total de pessoas que responderam "otimo"
            sumOtimo = sumOtimo + 1;
            mediaOtimo = (sumOtimo + idade)/sizeOtimo;
        }
        
        if(resp == 2) { 
            sumBom = sumBom + 1;
            percBom = sumBom*100/15.0;
        }
        
        if(resp == 1) {
            qntReg = qntReg + 1;
        }
    }
    
    printf("Media de idade das pessoas que responderam Otimo: %.2f\n", mediaOtimo);
    printf("Quantidade de pessoas que responderam Regular: %d\n", qntReg);
    printf("Percentual de pessoas que responderam Bom: %.2f%%\n", percBom);
    
    return 0;
}
