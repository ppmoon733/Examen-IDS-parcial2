#include <stdio.h>

void Triangulo(int posX, int posY, int alt, char c);

int main(void) {
    int altura;
    char Figura;
    int posX = 5, posY = 10;
    char tecla = 'X';
    printf("Ingrese la figura a realizar\n");
    scanf("%c", &Figura);
    printf("Ingrese la altura del triangulo\n");
    scanf("%i", &altura);

    do {
        for (int i = 0; i <= 30; i++) {
            printf("\n");
        }
        printf("Introduzca la direccion: ");
        scanf("%c", &tecla);
        switch (tecla)
        {
        case 'a':
            posX--;
            break;
        case 'd':
            posX++;
            break;
        case 'w':
            posY--;
            break;
        case's':
            posY++;
            break;
        }
        Triangulo(posX, posY, altura, Figura);
    } while (tecla != 'C');



}

//Funciones UwU
void Triangulo(int posX, int posY, int alt, char c) {
    //Espacios extras
    for (int Y = 0; Y <= posY; Y++) {
        printf("\n");
    }
    for (int i = 1; i <= alt; i++) {
        //Espacios extras
        for (int X = 0; X <= posX; X++) {
            printf(" ");
        }

        //UwU
        for (int j = 1; j <= alt - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}