#include <stdio.h>
int main() {
    int num=0;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    int i=1;
    int suma=0;

    for(i=1;i<=num;i++){
       suma += i;
    }
    printf("La suma es: %d\n",suma);
    return 0;
}
