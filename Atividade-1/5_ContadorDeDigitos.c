/* 
 * File:   qst05.c
 * Author: Leandro
 *
 * Created on 8 de Março de 2018, 23:33
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
contadorDeDigitos(int num) {
    int contaDigitos = 0;
    if (num == 0) {
        contaDigitos = 1;
    } else {
        while (num != 0) {
            contaDigitos += 1;
            num = num / 10;
        }
    }
    return("%d\n", contaDigitos);

}

int main() {
    int num;
    printf("############# Contador de Digitos ###########\n\n");
    printf("############# Entre com um numero inteiro ###########\n\n");
    scanf("%d",&num);
    printf("O numero %d possui %d digitos.\n\n",num,contadorDeDigitos(num));
    
    return 0;
}

