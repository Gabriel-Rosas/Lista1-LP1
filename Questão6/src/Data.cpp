#include "Data.h"

Data::Data(){

}

Data::~Data(){

}

Data::Data(int dia, int mes, int ano){
    if(ano > 2019 || ano < 0){
        ano = 1;
    }//if para verificar ano
    if(mes > 12 || mes < 1){
        mes = 1;
    }//if para verificar mes

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia > 31 || dia < 1){
            dia = 1;
        }
    }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia > 30 || dia < 1){
            dia = 1;
        }
    }else if(mes == 2){
        if(dia > 28 || dia < 1){
            dia = 1;
        }
    }//if para verificar dia
}

int Data::getDia(){
    return this->dia;
}

int Data::getMes(){
    return this->mes;
}

int Data::getAno(){
    return this->ano;
}

void Data::setDia(int dia){
    this->dia = dia;
}

void Data::setMes(int mes){
    this->mes = mes;
}

void Data::setAno(int ano){
    this->ano = ano;
}

int Data::compara(Data obj){
    if(this->ano > obj.ano){
        return 1;
    }else if(this->ano < obj.ano){
        return -1;
    }else if(this->ano == obj.ano){
        if(this->mes > obj.mes){
            return 1;
        }else if(this->mes < obj.mes){
            return -1;
        }else if(this->mes == obj.mes){
            if(this->dia > obj.dia){
                return 1;
            }else if(this->dia < obj.dia){
                return -1;
            }else if(this->dia == obj.dia){
                return 0;
            }//if de comparacao de dias
        }//if de comparacao de meses
    }//if de comparacao de anos
}

bool Data::isBissexto(int ano){
    if(ano % 4 == 0 && (ano % 400 == 0 || ano % 100 == 0)){
        return true;
    }else{
        return false;
    }
}

std::string Data::mesExtenso(int mes){
    if(mes == 1){
        return "Janeiro";
    }else if(mes == 2){
        return "Fevereiro";
    }else if(mes == 3){
        return "Marco";
    }else if(mes == 4){
        return "Abril";
    }else if( mes == 5){
        return "Maio";
    }else if(mes == 6){
        return "Junho";
    }else if(mes == 7){
        return "Julho";
    }else if(mes == 8){
        return "Agosto";
    }else if(mes == 9){
        return "Setembro";
    }else if(mes == 10){
        return "Outobro";
    }else if(mes == 11){
        return "Novembro";
    }else if(mes == 12){
        return "Dezembro";
    }
}
