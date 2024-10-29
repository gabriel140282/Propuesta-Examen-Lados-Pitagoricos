#include <iostream>
#include "triple_pitagorico.h"

int main() {

    triple_pitagorico(); //Llamamos a la función

    //Creamos 4 std::cout uno detrás de otro para imprimir de forma ordenada los lados pitagóricos pedidos
    std::cout<<tripleta1[0]<<", "<<tripleta1[1]<<", "<<tripleta1[2]<<std::endl;
    std::cout<<tripleta2[0]<<", "<<tripleta2[1]<<", "<<tripleta2[2]<<std::endl;
    std::cout<<tripleta3[0]<<", "<<tripleta3[1]<<", "<<tripleta3[2]<<std::endl;
    std::cout<<tripleta4[0]<<", "<<tripleta4[1]<<", "<<tripleta4[2]<<std::endl;

    return 0;
}