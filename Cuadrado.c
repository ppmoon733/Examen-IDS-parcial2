#include <stdio.h>

void imprimirCuadrado(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int lado;
    printf("Ingresa el tamaño del lado del cuadrado: ");
    scanf("%d", &lado);
    imprimirCuadrado(lado);
    return 0;
}