#include <iostream>
#include "Relogio.h"
#include <windows.h>
#include <time.h>

int main(){
    int hora, minuto, segundo;
    int usuario;
    //Relogio *rel1 = new Relogio();

    std::cout << "Insira um horario" << std::endl;
    std::cout << "Horas: ";
    std::cin >> hora;
    std::cout << "Minutos: ";
    std::cin >> minuto;
    std::cout << "Segundos: ";
    std::cin >> segundo;

    Relogio *rel1 = new Relogio(hora, minuto, segundo);
    //rel1->setHorario(hora, minuto, segundo);


    std::cout << "\t---Relogio---\n" << rel1->getHora() << ":" << rel1->getMinuto() << ":" << rel1->getSegundo() << std::endl;

    std::cout << "\nDigite 1 para iniciar o relogio" << std::endl;
    std::cout << "\nDigite 2 para encerrar o relogio" << std::endl;
    std::cin >> usuario;

    if(usuario == 1){
        while(1){
            system("cls");
            rel1->avancarHorario();
            std::cout << "\t---Relogio---\n" << rel1->getHora() << ":" << rel1->getMinuto() << ":" << rel1->getSegundo() << std::endl;
            Sleep(1000);
            system("cls");
        }
    }else{
        exit(0);
    }

    return 0;
}
