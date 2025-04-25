#include <stdio.h>
#include "funciones.h"

int comparacion(int a, int b) {
    if (a > b) {
      printf("EL número %d es mayor que el número %d\n", a, b);
    } else if (b > a) {
      printf("El número %d es mayor que el número %d\n", b, a);
    } else {
      printf("Los números ingresados son iguales\n");
    }
}
