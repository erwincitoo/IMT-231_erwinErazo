#include <stdio.h>
#include "funciones.h"

int main () {
  int a = -1;
  int b  = -1;
  while (1) {
      printf("Ingrese el primer número por favor: ");
      scanf("%d", &a);
      printf("Ingrese el segundo  número por favor: ");
      scanf("%d", &b);
      if (a == 0 && b == 0) {
        printf("Programa finalizado...\n");
        break;
      } else {
         comparacion(a,b);
      }
  }
  return 0;
}
