#include <stdio.h>

typedef enum { ROJO, VERDE, AMARILLO } Semaforo;
int main () {
  Semaforo estado = ROJO;
  int contador = 0;
  while (contador <= 9) {
    switch (estado) {
      case ROJO:
       printf("Estado: ROJO - Detenerse\n");
       estado = VERDE;
       break;
      case VERDE:
       printf("Estado: VERDE - Avanzar\n");
       estado = AMARILLO;
       break;
      case AMARILLO:
       printf("Estado: AMARILLO - Precaución \n");
       estado = ROJO;
       contador ++;
       printf("Este es el ciclo: %d\n", contador);
       break;
    }
  }
  printf("Programa finalizado...\n");
  return 0;
}



