#include <iostream>
#include "Data.h"

#include <string>

int main(){
    int d1, m1, a1;
    int d2, m2, a2;
    Data *dat1 = new Data();
    Data *dat2 = new Data();

    std::cout << "Insira a Data 1:" << std::endl;
    std::cin >> d1;
    std::cin >> m1;
    std::cin >> a1;

    dat1->setDia(d1);
    dat1->setMes(m1);
    dat1->setAno(a1);
    dat1->isBissexto(a1);

    std::cout << "Data 1: " << dat1->getDia() << "/" << dat1->getMes() << "/" << dat1->getAno() << std::endl;
    if(dat1->isBissexto(a1) == true){
        std::cout << "Data 1 eh Bissexto!" << std::endl;
    }else{
        std::cout << "Data 1 nao eh Bissexto!" << std::endl;
    }
    std::cout << "O mes da Data 1 eh: " << dat1->mesExtenso(m1) << std::endl;

    std::cout << "Insira a Data 2:" << std::endl;
    std::cin >> d2;
    std::cin >> m2;
    std::cin >> a2;

    dat2->setDia(d2);
    dat2->setMes(m2);
    dat2->setAno(a2);
    dat2->isBissexto(a2);

    std::cout << "Data 2: " << dat2->getDia() << "/" << dat2->getMes() << "/" << dat2->getAno() << std::endl;
    if(dat2->isBissexto(a2) == true){
        std::cout << "Data 2 eh Bissexto!" << std::endl;
    }else{
        std::cout << "Data 2 nao eh Bissexto!" << std::endl;
    }
    std::cout << "O mes da Data 2 eh: " << dat2->mesExtenso(m2) << std::endl;

    if(dat1->compara(*dat2) == 0){
        std::cout << "Data 1 = Data 2" << std::endl;
    }else if(dat1->compara(*dat2) == 1){
        std::cout << "Data 1 > Data 2" << std::endl;
    }else if(dat1->compara(*dat2) == -1){
        std::cout << "Data 1 < Data 2" << std::endl;
    }

    return 0;
}
