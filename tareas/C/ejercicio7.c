#include <stdio.h>

int main () {
  int num = 0;
  int contador = 0;
  while (1) {
      printf("Ingrese un número por favor: ");
      scanf("%d", &num);
      if (num != -1) {
        if ( num % 3 == 0) {
          contador ++;
        }
      } else {
        printf("Cantidad de múltiplos de 3 encontrados: %d\n", contador);
        printf("Programa finalizado...\n");
        break;
      }
  }
  return 0;
}
