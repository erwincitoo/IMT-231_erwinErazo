#include <stdio.h>

int main () {
  int num = 0;
  int resultado = 0;
  while (1) {
      printf("Ingrese un número por favor: ");
      scanf("%d", &num);
      if ( num >= 0) {
        resultado += num;
      } else {
        printf("Total acumulado: %d \n", resultado);
        break;
      }
  }
  return 0;
}
