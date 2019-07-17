#include "Voo.h"

Voo::Voo(){

}

Voo::~Voo(){

}

Voo::Voo(Data data, Horario horario, int numVoo){
    if(numVoo < 0){
        numVoo = 0;
    }
}

int Voo::getNumVoo(){
    return this->numVoo;
}

Data Voo::getData(){
    return this->data;
}

Horario Voo::getHorario(){
    return this->horario;
}

void Voo::setNumVoo(int numVoo){
    this->numVoo = numVoo;
}

void Voo::setData(Data data){
    this->data = data;
}

void Voo::setHorario(Horario horario){
    this->horario = horario;
}

int Voo::proximoLivre(){
    for(int i = 0; i < 100; i++){
        if(this->assento[i] == 0){
            return i;
        }
    }
}

std::string Voo::verifica(int numAss){
    if(this->assento[numAss] == 1){
        return "Assento ocupado";
    }else if(this->assento[numAss] == 0){
        return "Assento livre";
    }
}

bool Voo::oculpa(int numAss){
    if(this->assento[numAss] == 0){
        this->assento[numAss] = 1;
        return true;
    }else if(this->assento[numAss] == 1){
        return false;
    }
}

int Voo::vagas(){
    int j = 0;
    for(int i = 0; i < 100; i++){
        if(this->assento[i] == 0){
            j++;
        }
    }
    return j;
}
