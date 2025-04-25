#include <stdio.h>
#include "funciones.h"

int acumulador(int num) {
    int total = 0;
    while (num >= 0) {
      total += num;
    }
    return total;
}
