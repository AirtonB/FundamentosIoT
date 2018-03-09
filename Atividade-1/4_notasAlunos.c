/* 
 * File:   qst04.c
 * Author: Leandro
 *
 * Created on 2 de Março de 2018, 01:46
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n\n############# Entre com o número de alunos e suas respectivas notas ###########\n");
    int qtdAlunos;
    printf("\nDigite a quantidade de alunos na turma: ");
    scanf("%d", &qtdAlunos);
    printf(" ### Você adicionou %d alunos! ### \n", qtdAlunos);

    float notas[qtdAlunos];
    int count = 1;
    while (qtdAlunos >= count) {
        printf("Digite uma nota do Aluno %d: \n", count);
        scanf("%f", &notas[count]);
        printf("%.2f\n", notas[count]);
        count += 1;
    }
    float total = 0;
    for (int i = 1; i <= qtdAlunos; i++) {
        printf("%.2f ", notas[i]);
        total += notas[i];
        
    }
    
    printf("\nMédia dos alunos da turma: %.2f\n\n",total/qtdAlunos);

    return 0;
}
