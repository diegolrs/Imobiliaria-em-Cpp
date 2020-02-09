#include "Casa.h"
#include "Endereco.h"
#include <iostream>
#include <string>

Casa::Casa()
{

}

Casa::Casa(std::string numPavimentos, std::string numQuartos, std::string areaDoTerreno,
           std::string areaConstruida, std::string preco, Endereco enderecoDaCasa){
    setNumPavimentos(numPavimentos);
    setNumQuartos(numQuartos);
    setareaDoTerreno(areaDoTerreno);
    setaAreaConstruida(areaConstruida);
    setPreco(preco);
    setEndereco(enderecoDaCasa);
}
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

void Casa::setPreco(std::string entrada){
    preco = entrada;
}
//-----------------------------  GETS  -------------------------------
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

std::string Casa::getPreco(){
    return preco;
}

std::string Casa::getCasa(){
    return  getEndereco() +
    "\n  Número de pavimentos: " + numPavimentos +
    "\n  Número de quartos:  " + numQuartos +
    "\n  Área do terreno:  " + areaDoTerreno +
    "\n  Área construída:  " + areaConstruida +
    "\n  Preço:  " + preco;

}
