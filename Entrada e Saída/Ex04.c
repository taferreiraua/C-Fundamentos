#include <stdio.h>

//  Faça um programa que leia 2 valores do tipo ponto flutuante A e B, que correspondem
// a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem
// peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos, portanto é 11). Atribua o valor
// da operação de média na variável MEDIA . A seguir imprima o valor da variável
// MEDIA, por exemplo, MEDIA = 6.3

int main()
{
    float x, y, media;
    
    printf("Insira 2 notas:\n");
    scanf("%f %f", &x, &y);

    media = (x+y)/2;
    
    printf("media = %.2f", media);
    
    return 0;
}
