
/* 4. Matriz Transpuesta
Escriba un programa que cree la transpuesta de una matriz.
La salida en pantalla tendra que ser similar a esta:
Teclea el numero de renglones : 3
Teclea el numero de columnas : 4

MATRIZ ORIGINAL
1 4 5 7
2 4 1 5
7 6 4 9

MATRIZ TRANSPUESTA
1 2 7
4 4 6
5 1 4
7 5 9
*/
#include <stdio.h>

int main () {
    int i, j, filas=2, columnas=5;    // columnas
    int original[filas][columnas]; // arreglo matriz vacìo de 2 filas x 5 columnas
    int transpuesta[columnas][filas]; // arreglo matriz vacìo de 5 filas x 2 columnas

    printf("\n Programa que crea la transpuesta de una matriz dada\n");

    // CARGA DATOS M ORIGINAL
    printf("\n Matriz original \n");
        for (i=0; i<filas; i++) {          // recorro para i filas
            for (j=0; j<columnas; j++) {       // recorro para j columnas
                printf(" Ingrese numero [%d][%d] > ", i+1, j+1); // prompt usuario
                scanf(" %d", &original[i][j]);    // relleno cada celda con prompt usuario
            } // for cols
        } //for filas

    // MUESTRO ORIGINAL EN PANTALLA
    printf("\n Matriz original es \n");
    for (i=0; i<filas; i++) {
        for (j=0; j<columnas; j++) {
            printf(" [%d][%d] > %d\t ", i+1, j+1, original[i][j]);    // muestro datos por celda y tabulados
        } // for cols
        printf("\n"); // salto de fila
    } //for filas

    // MUESTRO ORIGINAL EN PANTALLA
    printf("\n Matriz transpuesta es \n");
    for (j=0; j<columnas; j++) {
        for (i=0; i<filas; i++) {
            transpuesta[j][i] = original [i][j];    // hago la transposición de datos
                                                    // esto es clave !!!!!!!!!!!!!
            printf(" [%d][%d] > %d\t ", j+1, i+1, transpuesta[j][i]);    // muestro datos por celda y tabulados
        } // for cols
        printf("\n"); // salto de fila
    } //for filas
/*
MATRIZ ORIGINAL
1 4 5 7
2 4 1 5
7 6 4 9

MATRIZ TRANSPUESTA
1 2 7
4 4 6
5 1 4
7 5 9
*/
return 0;
}



