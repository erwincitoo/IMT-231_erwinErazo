#include <stdio.h>
#include "funciones.h"

int main () {
  int num = -1;
  while (1) {
    if (num == 0) {
      printf("El programa ha finalizado... \n");
    break;
    } else {
      printf("Ingrese un número por favor: ");
      scanf("%d", &num);
      if (num != 0 && num > 0) {
        digitos(num);
      } else {
        printf("El número ingresado es menor a 0...\n");
      }
    }
  }
  return 0;
}
