#include <stdio.h>
#include <stdlib.h>

/*Escribir una función que tome como argumento un entero positivo entre 1 y 7
y retorne un puntero a cadena con el nombre del dı́a de la semana correspondiente
al argumento. Probar dicha función.*/

char* point_day(char dias [7][50], int num){

    char *p = dias[num-1];

    return p;

}

int main(){

    int num;
    char dias[7][50] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    char *p_arrchar;

    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &num);

    p_arrchar = point_day(dias, num);

    printf("\nEl puntero a la cadena con el nombre del dia correspondiente es %p", p_arrchar);

    printf("\n\nLunes = %p\n", dias[0]);
    printf("\nMartes = %p\n", dias[1]);
    printf("\nMiercoles = %p\n", dias[2]);
    printf("\nJueves = %p\n", dias[3]);
    printf("\nViernes = %p\n", dias[4]);
    printf("\nSabado = %p\n", dias[5]);
    printf("\nDomingo = %p\n", dias[6]);

    printf("\n\n\n\n\n\n");

    return 0;

}