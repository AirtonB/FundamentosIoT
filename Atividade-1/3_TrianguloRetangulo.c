/* 
 * File:   qst03.c
 * Author: Leandro
 *
 * Created on 2 de Março de 2018, 00:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main() {
    printf("############# Entre com 3 números naturais e veja se os mesmos formam um triângulo-retângulo ###########\n\n");
    int x, y, z, temp;
    printf("Entre com um número inteiro natural: ");
    scanf("%d", &x);
    printf("Entre com um número inteiro natural: ");
    scanf("%d", &y);
    printf("Entre com um número inteiro natural: ");
    scanf("%d", &z);
    if (y > x) {
        temp = x;
        x = y;
        y = temp;
    } else if (z > x) {
        temp = x;
        x = z;
        z = temp;
    }
    if (pow(x, 2) == pow(y, 2) + pow(z, 2)) {
        printf("Este triângulo é retangulo!\n");
    } else {
        printf("Este triângulo não é retangulo\n");
    }
    return 0;
}

