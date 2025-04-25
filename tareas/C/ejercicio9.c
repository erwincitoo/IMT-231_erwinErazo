#include <stdio.h>
#include "funciones.h"

int main() {
  while(1) {
   int num = 0;
   printf("Ingrese un número por favor: ");
   scanf("%d", &num);
   if (num >= 0 && num <10) {
     printf("El número tiene solo un digito\n");
     printf("Programa finalizado...\n");
     break;
   } else {
      int invertido = invertir(num);
      printf("El número invertido es: %d \n", invertido);
   }
 }
}
