#include <stdio.h>
#include "funciones.h"

int digitos(int num) {
    int contador = 0;
    while (num > 0) {
    num /= 10;
    contador ++;
    }
    printf("Digitos: %d \n", contador);
    return contador;
}
