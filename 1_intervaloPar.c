/* 
 * File:   qst01.c
 * Author: Leandro
 Created on 1 de Março de 2018, 21:20
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("############# números pares e multiplos de 3 \n de um determinado intervalo ###########\n\n");
    int numI;
    int numF;
    printf("Digite um número inteiro: \n");
    scanf("%d", &numI);
    printf("Digite novamento um número inteiro: \n");
    scanf("%d", &numF);

    printf("Números pares e multiplos de 3 do intervalo digitado: \n");
    int z = numF - 2;
    if(numI != numF || numF != 0){
        for (int i = 0; i <= z; i++) {
            numI += 1;
            if (numI % 2 == 0 && numI % 3 == 0) {
                printf("%d \n", numI);
            }
        }
    }else{
        printf("Formato inválido!");
    }
    return 0;
}
