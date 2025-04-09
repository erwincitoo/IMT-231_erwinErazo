#include <stdio.h>
int main() {
    int num=0;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    int numero = num;
    int contador = 0;
    if (num == 0) {
       contador = 1;
    } else {
         while (num > 0) {
         num /= 10;
         contador +=1;
         }
    }
    printf("El número %d tiene: %d digitos.\n", numero, contador);
    return 0;
}
