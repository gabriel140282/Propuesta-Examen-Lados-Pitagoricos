#include <cmath>
#include "triple_pitagorico.h"

// Declaramos las variables de las 4 tripletas con un valor 0
int tripleta1[3] = {0}, tripleta2[3] = {0}, tripleta3[3] = {0}, tripleta4[3] = {0};

void triple_pitagorico() { // No necesitamos que la función devuelva un valor (no hay un return)
    int a,b,c,limite_bucle=20; /* Inicializamos las variables y creamos una cuarta variable llamada
                                limite_bucle para evitar que se generen infinitos lados pitagóricos */

    for (a=1; a<=limite_bucle; a++) {
        for (b=a; b<=limite_bucle; b++) {
            c = sqrt(a*a + b*b);
            if (c*c == a*a + b*b) { // Se comprueba la ecuación pitagórica

                // Cogemos los valores de los lados pitagóricos generados que deseemos con comrpobaciones if e if else
                if (a==3 && b==4 && c==5) {
                    tripleta1[0] = a; // Almacena el valor generado en la variable 'a'
                    tripleta1[1] = b;
                    tripleta1[2] = c;
                } else if (a==6 && b==8 && c==10) {
                    tripleta2[0] = a;
                    tripleta2[1] = b;
                    tripleta2[2] = c;
                } else if (a==5 && b==12 && c==13) {
                    tripleta3[0] = a;
                    tripleta3[1] = b;
                    tripleta3[2] = c;
                } else if (a==8 && b==15 && c==17) {
                    tripleta4[0] = a;
                    tripleta4[1] = b;
                    tripleta4[2] = c;
                }
            }
        }
    }
}
