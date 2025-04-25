#include <stdio.h>
#include "funciones.h"

int main () {
  int num = 0;
  int resultado  = 0;
  while (1) {
      printf("Ingrese un número por favor: ");
      scanf("%d", &num);
      if ( num > 0) {
        resultado = factorial(num);
        printf("El factorial de %d es: %d \n", num, resultado);
      } else {
        printf("Programa finalizado...\n");
        break;
      }
  }
  return 0;
}
