#include <stdio.h>

//Considere os vetores A e B de inteiros positivos. Determine o vetor C que é interseção
//de A com B. Utilize o valor -1 para indicar final de vetor. 

int main()
{
    int vetor_A[] = {}, vetor_B[] = {}; // vetores
    int numA, numB; // parãmetro de parada do laço while
    int countA = 0, countB = 0, c = 0; // contadores
    int maiorA = 0, maiorB = 0; // retorna 1 para o vetor de maior comprimento
    
    printf("Digite os valores(interiros) do vetor A e digite -1 para encerrar:\n");
    while(numA > -1){
        scanf("%d", &numA);
        if(numA != -1){
            vetor_A[countA] = numA;
            countA = countA + 1;
        }
    }
    
    printf("Digite os valores(interiros) do vetor B e digite -1 para encerrar:\n");
    while(numB > -1){
        scanf("%d", &numB);
        if(numB != -1){
            vetor_B[countB] = numB;
            countB = countB + 1;
        }
    }
    
    int len = countA + countB; // comprimento do vetor de interseção
    int inter[len];

    for(int i=0; i<len; i++){
        if(i <= countA)
            inter[i] = vetor_A[i];
        if(i <= countB)
            inter[i] = vetor_B[i];
    }
    
    for(int j=0; j<len; j++)
        printf("%d", inter[j]);
        
    return 0;
}
