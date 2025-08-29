/*  Suma de matrices
    Que realice la suma de 2 matrices NxN.
    Teclea el tamaño matriz
    Contenido de las matrices
       Matriz 1 1213       Matriz 2 2325    Suma    3538
                1456                5421            6887
                6216                8769            149715
                7431                9541            16972
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("\n Programa para sumar 2 matrices\n"); // titulo programa
    int i, j, m;
    int matrices=2;       // cantidad de matrices a sumar
    int N=2;              // tamaño de las matrices
    int filas=N;          // filas
    int columnas=N;       // columnas
    int matriz1[filas][columnas]; // arreglo matriz vacìo
    int matriz2[filas][columnas]; // arreglo matriz vacìo
    int suma[filas][columnas];

    // CARGA DATOS M1
           printf("\n Matriz 1 \n");
        for (i=0; i<filas; i++) {          // recorro para i filas
            for (j=0; j<columnas; j++) {       // recorro para j columnas
                printf(" Ingrese numero [%d][%d] > ", i+1, j+1); // prompt usuario
                scanf(" %d", &matriz1[i][j]);    // relleno cada celda con prompt usuario
            } // for cols
        } //for filas

    // CARGA DATOS M2
           printf("\n Matriz 2 \n");
        for (i=0; i<filas; i++) {          // recorro para i filas
            for (j=0; j<columnas; j++) {       // recorro para j columnas
                printf(" Ingrese numero [%d][%d] > ", i+1, j+1); // prompt usuario
                scanf(" %d", &matriz2[i][j]);    // relleno celdas con prompt usuario
            } // for cols
        } //for filas

    // REALIZO SUMA MATRICES 1 Y 2
        for (i=0; i<filas; i++) {
                for (j=0; j<columnas; j++) {
                    suma[i][j] = matriz1[i][j] + matriz2[i][j];
                } // for cols
            } //for filas

    // MUESTRO SUMA EN PANTALLA
    printf("\n Matriz suma es \n");
    for (i=0; i<filas; i++) {
        for (j=0; j<columnas; j++) {
            printf(" [%d][%d] > %d\t ", i+1, j+1, suma[i][j]);    // muestro datos por celda y tabulados
        } // for cols
        printf("\n"); // salto de fila
    } //for filas

/*  está mal esto...
    int matriz[filas][columnas]; // arreglo matriz vacìo
    // CARGA DATOS MULTIPLES
    for (m=1; m<=matrices; m++) {         // recorro para n matrices
           printf("\n Matriz %d \n", m);
        for (i=0; i<filas; i++) {          // recorro para i filas
            for (j=0; j<columnas; j++) {       // recorro para j columnas
                printf(" Ingrese numero [%d][%d] > ", i+1, j+1); // prompt usuario
                scanf(" %d", &matriz[i][j]);    // relleno celdas con prompt usuario
            } // for interno cols
        } //for medio filas
    } // for externo matrices

    // REALIZO SUMA MULTIPLE
    for (m=1; m<=matrices; m++) {
        for (i=0; i<filas; i++) {
                for (j=0; j<columnas; j++) {
                    suma[i][j] = matriz[i][j] + suma[i][j]; // VER ACAAAAAAAAAA...
                } // for cols
            } //for filas
    } // for matrices

    // MUESTRO SUMA EN PANTALLA
    printf("\n La matriz suma es: \n");    // muestro numero matriz
    for (i=0; i<filas; i++) {
        for (j=0; j<columnas; j++) {
            printf(" %d\t ", suma[i][j]);    // muestro datos por celda tabulados
        } // for cols
        printf("\n"); // salto de fila
    } //for filas
*/

return 0;
}
