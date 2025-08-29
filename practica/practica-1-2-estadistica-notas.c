/*  Practica 1
    2) Estadistica de notas
       alumno, nota, promedio, libre-regular, promedio notas alumno, promedio cada asignaturas
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
//                                    asignaturas       promedio alumno
// 1 fila x alumno          alumno  10  9   8   7.4         8.6
// col son notas                    5   4   3   6           4.5
// promedio x alumno                6.4 5   7   8.2         6.65
//                                  6   8.2 6.4 5.6         6.55
//                                  ---------------
// prom asignatura                  6.8 6.5 6.1 6.8
    int alumnos=2;       // 2 alumnos
    int notas=4;         // 4 asignaturas
    float promedio=0;    // promedio cada alumno
    float alumno=1;
    float nota1=0, nota2=0, nota3=0, nota4=0;       //0-6 libre, 6-8 regular, 8-10 promovido
    float stats[6];  // [alumno, nota1, nota2, nota3, nota4, promedioAlumno]

    /*  indico alumno1
            cargo nota1, cargo nota2, cargo nota3, cargo nota4, saco prom1
        paso al alumno2...
            cargo notas... saco prom2
        muestro prom materia1, prom materia2, prom materia3, prom materia4
    */

    for (int i=1;i<=alumnos;i++) {       // repito alumnos
            printf("\n Alumno %d \n ", i);     // alumno
            stats[0]=i;                  // en stats0 cargo el alumno
        for (int j=1;j<=notas;j++) {         // repito notas
            printf("\n Ingrese nota:\n > ");
            scanf(" %f", &stats[j]);      // capturo datos de stats1 a stats4 y cargo en el arreglo stats
        } //for interno notas

            nota1 = nota1+ stats[1];      // acumulo notas
            nota2 = nota2+ stats[2];
            nota3 = nota3+ stats[3];
            nota4 = nota4+ stats[4];
            promedio = (stats[1] + stats[2] + stats[3] + stats[4])/notas;// promedio notas alumno

                                                   // muestro estadisticas
        //printf(" Alumno %1.0f, ", stats[0]);     // alumno
        printf("\n Nota 1 %2.2f, ", stats[1]);     // nota1
        printf(" Nota 2 %2.2f, ", stats[2]);       // nota2
        printf(" Nota 3 %2.2f, ", stats[3]);       // nota3
        printf(" Nota 4 %2.2f.\n", stats[4]);     // nota4
        printf(" Promedio alumno es  %2.2f \n", promedio);     // promedio
        //0-6 libre, 6-8 regular, 8-10 promovido

            if (promedio>8 && promedio<=10)         // condicion alumno
                printf(" Alumno promovido\n");
            if (promedio>6 && promedio<=8)
                printf(" Alumno regular\n");
            if (promedio<=6)
                printf(" Alumno libre\n");


        printf(" ----------------------\n ");
        alumno++;

    } //for externo alumnos

        printf(" Promedio materia 1 es %2.2f  \n ", nota1/alumnos);       // muestro promedios nota 1
        printf(" Promedio materia 2 es %2.2f  \n ", nota2/alumnos);
        printf(" Promedio materia 3 es %2.2f  \n ", nota3/alumnos);
        printf(" Promedio materia 4 es %2.2f  \n ", nota4/alumnos);

return 0;
}
