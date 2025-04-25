#include <stdio.h>
#include "funciones.h"
#define 	MENSAJE1 	"Ingrese el primer número: "
#define 	MENSAJE2 	"Ingrese el segundo número: "
int main () {
  int opcion = 0;
  int a = 0;
  int b = 0;
  int resultado = 0;
  while (1) {
      printf("--- MENU ---\n");
      printf("1. Sumar dos números\n");
      printf("2. Restar dos números\n");
      printf("3. Multiplicar dos números\n");
      printf("4. Salir \n");
      printf("Ingrese una opción: ");
      scanf("%d", &opcion);
      if (opcion == 4) {
	printf("Programa finalizado... \n");
        break;
      } else {
       switch (opcion) {
        case 1:
           printf("--- SUMA ---\n");
           printf(MENSAJE1);
           scanf("%d", &a);
           printf(MENSAJE2);
           scanf("%d", &b);
           resultado = suma(a, b);
           printf("El resultado es: %d \n", resultado);
           break;
        case 2:
           printf("--- RESTA ---\n");
           printf(MENSAJE1);
           scanf("%d", &a);
           printf(MENSAJE2);
           scanf("%d", &b);
           resultado = resta(a, b);
           printf("El resultado es: %d \n", resultado);
           break;
        case 3:
           printf("--- MULTIPLICACIÓN ---\n");
           printf(MENSAJE1);
           scanf("%d", &a);
           printf(MENSAJE2);
           scanf("%d", &b);
           resultado = multiplicacion(a, b);
           printf("El resultado es: %d \n", resultado);
           break;
        case 4:
           printf("Saliendo del sistema...");
           break;
        default:
          printf("OPCIÓN INVALIDA");
        }
      }
  }
  return 0;
}
