#include <stdio.h>
#include <conio.h>

void imprimirRectangulo(int posX, int posY, int ancho, int alto) {
    for (int i = 0; i < ancho; i++) {
        for (int j = 0; j < alto; j++) {
            if (i == posY && j == posX) {
                printf("S ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
}

int main() {
    int posX = 0;
    int posY = 0;
    int ancho = 5;
    int alto = 3;
    char tecla;

    do {
        system("cls"); // Limpia la pantalla
        imprimirRectangulo(posX, posY, ancho, alto);
        tecla = getch(); // Lee la tecla presionada

        switch (tecla) {
            case 'w':
                posY--;
                break;
            case 's':
                posY++;
                break;
            case 'a':
                posX--;
                break;
            case 'd':
                posX++;
                break;
        }
    } while (tecla != 'x'); // Presiona 'x' para salir

    return 0;
}