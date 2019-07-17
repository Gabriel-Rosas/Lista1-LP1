#include <iostream>
#include "Voo.h"


int main(){
    int dia, mes, ano;
    int hora, minuto, segundo;
    int numVoo, numAss;

    std::cout << "Insira Data: " << std::endl;
    std::cin >> dia;
    std::cin >> mes;
    std::cin >> ano;

    Data *d1 = new Data(dia, mes, ano);

    std::cout << "Insira Horario: " << std::endl;
    std::cin >> hora;
    std::cin >> minuto;
    std::cin >> segundo;

    Horario *h1 = new Horario(hora, minuto, segundo);

    std::cout  << "Insira Voo: " << std::endl;
    std::cin >> numVoo;

    Voo *v1 = new Voo(*d1, *h1, numVoo);

    std::cout << "Proximo assento livre: " << v1->proximoLivre() << std::endl;
    std::cout << "Verificar assento: ";
    std::cin >> numAss;
    std::cout << v1->verifica(numAss) << std::endl;
    std::cout << "Ocupar assento: ";
    std::cin >> numAss;
    v1->oculpa(numAss);
    if(v1->oculpa(numAss) == true){
        std::cout << "Assento reservado com sucesso!" << std::endl;
    }else if(v1->oculpa(numAss) == false){
        std::cout << "Assento ocupado!" << std::endl;
    }

    return 0;
}
