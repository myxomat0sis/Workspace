#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int matrix[3][3],i,j,diagonalx,diagonaly,filas[3],columnas[3],diagonal,fila,columna;
    diagonal = 0;
    diagonalx = 0;
    diagonaly = 0;
    fila = 0;
    columna = 0;
    for(i = 0; i < 3; i++) {
        filas[i] = 0;
        columnas[i] = 0;
        for(j = 0; j < 3; j++) {
            printf("Ingrese el valor de la posicion [%i][%i] >> ",i,j);
            scanf("%i", &matrix[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i == j) {
                diagonalx = diagonalx + matrix[i][j];
            }
            if(i + j == 2) {
                diagonaly = diagonaly + matrix[i][j];
            }
            if(i == 0 || i == 1 || i == 2) {
                filas[i] = filas[i] + matrix[i][j];
            }
            if(j == 0 || j == 1 || j == 2) {
                columnas[j] = columnas[j] + matrix[i][j];
            }
        }
    }
    if(diagonalx == diagonaly) {
        diagonal = diagonalx;
    }
    if(filas[0] == filas[1] && filas[1] == filas[2]) {
        fila = filas[0];
    }
    if(columnas[0] == columnas[1] && columnas[1] == columnas[2]) {
        columna = columnas[0];
    }
    if(fila == columna && columna == diagonal) {
        printf("\n %i = %i = %i / Es un cuadrado magico",fila,columna,diagonal);
    }
    else {
        printf("\n No es un cuadrado magico");
    }
}