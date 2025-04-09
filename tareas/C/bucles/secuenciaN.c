#include <stdio.h>
int main() {
    int num=0;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    int i=1;

    for(i=1;i<=num;i++){
       printf("%d\n", i);
    }
    return 0;
}
