#include <stdio.h>

// Em uma eleição presidencial, existem quatro candidatos. Os votos são informados através de código. Os códigos utilizados são:
//  1,2,3,4 votos para os respectivos candidatos;
//  5 voto nulo;
//  6 voto em branco
// Escreva uma Programa que calcule e imprima:
//  total de votos para cada candidato
//  total de votos nulos
//  total de votos em branco
//  porcentagem de votos nulos sobre o total de votos
//  porcentagem de votos em branco sobre o total de votos.

int main() {
    
    int qnt;
    
    printf("Quantos votos deseja inserir?\n");
    scanf("%d", &qnt);
    
    float votos[qnt];
    float q1=0, q2=0, q3=0, q4=0, q5=0, q6=0;
    
    for(int i=0; i<qnt; i++) {
        printf("Digite o numero:\n");
        printf("[1]  Candidato 1\n");
        printf("[2]  Candidato 2\n");
        printf("[3]  Candidato 3\n");
        printf("[4]  Candidato 4\n");
        printf("[5]  Nulo\n");
        printf("[6]  Branco\n");
        scanf("%f", &votos[i]);
        
        if(votos[i]==1.0)
            q1 = q1 + 1;
        else if(votos[i]==2.0)
            q2 = q2 + 1;
        else if(votos[i]==3.0)
            q3 = q3 + 1;
        else if(votos[i]==4.0)
            q4 = q4 + 1;
        else if(votos[i]==5.0)
            q5 = q5 + 1;
        else
            q6 = q6 + 1;
    }
    
    printf("Resultado dos votos:\n");
    printf("Candidato 1 -> %.f votos - %.2f%%;\n", q1, q1*100/qnt);
    printf("Candidato 2 -> %.f votos - %.2f%%;\n", q2, q2*100/qnt);
    printf("Candidato 3 -> %.f votos - %.2f%%;\n", q3, q3*100/qnt);
    printf("Candidato 4 -> %.f votos - %.2f%%;\n", q4, q4*100/qnt);
    printf("Nulos -> %.f votos - %.2f%%;\n", q5, q5*100/qnt);
    printf("Brancos -> %.f votos - %.2f%%;", q6, q6*100/qnt);

    return 0;
}
