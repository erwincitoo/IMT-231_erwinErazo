#include <stdio.h>
#include "funciones.h"

int main () {
  int num = 0;
  while (1) {
    if (num == -1) {
      printf("El programa ha finalizado...\n");
      break;
    } else {
       printf("Ingrese un número por favor: ");
       scanf("%d", &num);
       if (num != -1) {
         parImpar(num);
       }
    }
  }
  return 0;
}
