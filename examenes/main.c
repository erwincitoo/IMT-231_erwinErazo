#include <stdio.h>
#include "funciones.h"
#define 	MSJ 	"Ingrese un número por favor: "
int main () {
	while (1) {
		int opcion;
		int num;
		printf("--- MENU ---\n");
		printf("1. Verificar si un número es primo\n");
		printf("2. Calcular el factorial de un número\n");
		printf("3. Contar números pares e impares entre 1 y N\n");
		printf("4. Mostrar múltiplos de 3 entre 1 y N\n");
		printf("5. Salir del programa\n");
		printf("Seleccione una opción: ");
		scanf("%d", &opcion);
		if (opcion == 5) {
			printf("Gracias por utilizar. Programa finalizado...\n");
			break;
		} else {
			switch (opcion) {
				case 1:
					printf("--- VERIFICAR SI UN NÚMERO ES PRIMO \n");
					printf(MSJ);
					scanf("%d", &num);
					if (num >= 0) {
						esPrimo(num);
					}
					break;
				case 2:
					printf("--- CALCULAR EL FACTORIAL DE UN NÚMERO \n");
					printf(MSJ);
					scanf("%d", &num);
					if (num >= 0) {
						int resultado = factorial(num);
						printf("El factorial es: %d\n", resultado);
					}
					break;
				case 3:
					printf("--- CONTAR NÚMEROS PARES E IMPARES ENTRE 1 y n \n");
					printf(MSJ);
					scanf("%d", &num);
					if (num >= 0) {
						contarDigitos(num);
					}
					break;
				case 4:
					printf("--- MOSTRAR MÚLTIPLOS DE 3 ENTRE 1 Y N \n");
					printf(MSJ);
					scanf("%d", &num);
					if (num >= 0) {
						int n = 1;
						int resultado = 0;
						for (int i=1; i <= num; i++) {
							int resultado =  n*i;
							if (resultado % 3 == 0) {
								printf("Múltiplos: %d\n", resultado);
							}
						}
					}
					break;
			}
		}
	}
	return 0;
}

