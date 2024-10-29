#include <math.h>
#include "triple_pitagorico.h"

int tripleta1[3] = {0}, tripleta2[3] = {0}, tripleta3[3] = {0}, tripleta4[3] = {0};

void triple_pitagorico() {
    int a,b,c,limite_bucle=20;

    for (a=1; a<=limite_bucle; a++) {
        for (b=a; b<=limite_bucle; b++) {
            c = sqrt(a*a + b*b);
            if (c*c == a*a + b*b) {

                if (a==3 && b==4 && c==5) {
                    tripleta1[0] = a;
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
