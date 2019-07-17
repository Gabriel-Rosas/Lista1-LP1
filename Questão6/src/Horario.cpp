#include "Horario.h"

Horario::Horario(){

}

Horario::~Horario(){

}

Horario::Horario(int hora, int minuto, int segundo){
    if(hora > 23 || hora < 0){
        hora = 0;
    }
    if(minuto > 59 || minuto < 0){
        minuto = 0;
    }
    if(segundo > 59 || segundo < 0){
        segundo = 0;
    }
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

int Horario::getHora(){
    return this->hora;
}

int Horario::getMinuto(){
    return this->minuto;
}

int Horario::getSegundo(){
    return this->segundo;
}

void Horario::setHora(int hora){
    this->hora = hora;
}

void Horario::setMinuto(int minuto){
    this->minuto = minuto;
}

void Horario::setSegundo(int segundo){
    this->segundo = segundo;
}

void Horario::setHorario(int hora, int minuto, int segundo){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

void Horario::avancarHorario(){
    if(this->segundo < 59){
        this->segundo++;
    }else if(this->segundo == 59){
        this->segundo = 0;

        if(this->minuto < 59){
            this->minuto++;
        }else if(this->minuto == 59){
            this->minuto = 0;

            if(this->hora < 23){
                this->hora++;
            }else if(this->hora == 23){
                this->hora = 0;
            }//if para avancar hora
        }//if para avancar minuto
    }//if para segundo
}
