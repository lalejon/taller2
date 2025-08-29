
/*
    Imprimir el arreglo de la funcion identidad NxN

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N=3;            // tamaño de la matriz
    int row=N;
    int col=N;
    int matriz_Id[row][col]; // arreglo matriz identidad vacìo

    for (row=0; row<N; row++){
        for (col=0; col<N; col++){
            if (row==col) {
                matriz_Id[row][col] = 1;            //pone 1 cuando row=col
            } else {
                matriz_Id[row][col] = 0;            //rellena con ceros cuando row!=col
            }//if
        }//for
    }//for

	printf("\n\n Cargamos una matriz de %d x %d elementos\n\n", N, N);

	// imprimo la matriz
    for (row=0; row<N; row++) {
        for (col=0; col<N; col++) {
            printf(" La matriz contiene en [%d][%d] a ", row, col);   // imprimo posicion del elemento
            printf(" [%d] \n", matriz_Id[row][col]); // imprimo valor del elemento
        }//for
    }//for


return 0;
}
