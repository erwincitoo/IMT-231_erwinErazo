#include <stdio.h>
#include "funciones.h"

int invertir(int num) {
  int ninvertido = 0;
  while (num > 0)  {
    int digito = num % 10;
    ninvertido = ninvertido * 10 + digito;
    num /= 10;
  }
  return ninvertido;
}
