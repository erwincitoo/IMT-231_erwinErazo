#include <stdio.h>
int main() {
    int num=0;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    int i=1;
    printf("TABLA DEL %d\n", num);
    for(i=1;i<=10;i++){
      int resultado = num*i;
      printf("%d * %d = %d\n", num, i, resultado);
    }
    return 0;
}
