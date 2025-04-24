#include <stdio.h>
#include "funciones.h"

int esPrimo(int num) {
	if (num % num == 0 && num % 1 == 0) {
		printf("El número %d es primo \n", num);
	} else {
		printf("El número %d no es primo \n", num);
	}
}


int factorial(int num) {
    int resultado = 1;
    for (int i = num; i >= 1; i--) {
      resultado = resultado *  i;
    }
    return resultado;
}


int contarDigitos(int num) {
	int pares = 0;
	int impares = 0;
	for (int i=1;i<=num;i++){
		if (i % 2 == 0) {
			pares++;
		} else {
			impares++;
		}
	}
	printf("Cantidad Pares: %d\n", pares);
	printf("Cantidad Impares: %d\n", impares);
}


