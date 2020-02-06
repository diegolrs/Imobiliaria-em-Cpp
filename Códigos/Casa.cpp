#include "Casa.h"
#include "Endereco.h"
#include <iostream>
#include <string>

Casa::Casa()
{
   
}

Casa::Casa(std::string numPavimentos, std::string numQuartos, std::string areaDoTerreno, std::string areaConstruida, Endereco enderecoDaCasa){
    setNumPavimentos(numPavimentos);
    setNumQuartos(numQuartos);
    setareaDoTerreno(areaDoTerreno);
    setaAreaConstruida(areaConstruida);
    this->setEndereco(enderecoDaCasa);
}

//-----------------------------  GETS  -----------------------------



//-----------------------------  SETS  -----------------------------

void Casa::setNumPavimentos(std::string entrada){
    numPavimentos = entrada;
}

void Casa::setNumQuartos(std::string entrada){
    numQuartos = entrada;
}

void Casa::setareaDoTerreno(std::string entrada){
    areaDoTerreno = entrada;
}

void Casa::setaAreaConstruida(std::string entrada){
    areaConstruida = entrada;
}

std::string Casa::getNumPavimentos(){
    return numPavimentos;
}

std::string Casa::getNumQuartos(){
    return numQuartos;
}

std::string Casa::getareaDoTerreno(){
    return areaDoTerreno;
}

std::string Casa::getaAreaConstruida(){
    return areaConstruida;
}

std::string Casa::getCasa(){
    return "\n  N�mero de pavimentos: " + numPavimentos +
    "\n  N�mero de quartos:  " + numQuartos +
    "\n  �rea do terreno:  " + areaDoTerreno +
    "\n  �rea constru�da:  " + areaConstruida +
    getEndereco();
    
}







