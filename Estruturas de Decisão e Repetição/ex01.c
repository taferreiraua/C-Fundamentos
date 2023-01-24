#include <stdio.h>

// Faça uma Programa que receba um número inteiro, calcule e imprima a tabuada desse número

int main()
{
    int num;
    
    printf("Insira um numero: ");
    scanf("%d", &num);
    
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, i*num);
    }

    return 0;
}
