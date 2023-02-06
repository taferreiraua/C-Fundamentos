#include <stdio.h>

// Para o vetor A, construa um vetor P formado pelos índices dos elementos pares de A.
// Exemplo: Se A = [ 1 3 6 7 8 ] então P = [ 2 4 ]

int main()
{
    int A_vetor[] = {}, P_vetor[] = {};
    int num = 1, size=0, aux;
    
    printf("Insira numeros inteiros positivos e digite zero para encerrar:\n");
    while(num != 0){
        scanf("%d", &num);
        if(num != 0){
            A_vetor[size] = num;
            size = size + 1;
        }
    }

    for(int a=0; a<size; a++){
        for(int b=a; b<size; b++){
            if(A_vetor[a]>A_vetor[b]){
                aux = A_vetor[a];
                A_vetor[a] = A_vetor[b];
                A_vetor[b] = aux;
            }
        }
    }
    
    for(int x=0; x<size; x++)
        if((A_vetor[x] % 2) == 0)
            P_vetor[j] = x;
    
    return 0;
}
