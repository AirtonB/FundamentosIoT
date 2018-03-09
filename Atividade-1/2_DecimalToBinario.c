/* 
 * File:   qst03.c
 * Author: Leandro
 Created on 2 de Março de 2018, 20:01
 */
#include <stdio.h>
 
int main()
{
  int num,bit, x;
 
  printf("Digite um número inteiro: \n");
  scanf("%d", &num);
 
  printf("%d (Decimal) em binário é: \n", num);
  for (bit = 31; bit >= 0; bit--){
      x = num >> bit;
      if (x & 1){
        printf("1");
      }else{
          printf("0");
      }
    }
    printf("\n\n");
  return 0;
}
