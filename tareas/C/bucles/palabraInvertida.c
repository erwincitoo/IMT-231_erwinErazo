#include <stdio.h>
int main() {
    char palabra [100];
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    int longitud = 0;
    int i = 0;

     while (palabra[longitud] != '\0') {
         longitud +=1;
     }
     for (i = longitud - 1; i >= 0; i--){
        printf("%c", palabra[i]);
     }
     printf("\n");
    return 0;
}
