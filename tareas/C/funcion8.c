#include <stdio.h>
#include "funciones.h"

int factorial(int num) {
    int resultado = 1;
    for (int i = num; i >= 1; i--) {
      resultado = resultado *  i;
    }
    return resultado;
}
