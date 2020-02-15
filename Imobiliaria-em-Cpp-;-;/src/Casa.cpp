#include "Casa.h"

Casa::Casa()
{
    Endereco();
    setNumPavimentos("0");
    setNumQuartos("0");
    setareaDoTerreno("0");
    setaAreaConstruida("0");
    setValor("0");

}

Casa::Casa(std::string numPavimentos, std::string numQuartos, std::string areaDoTerreno,
           std::string areaConstruida, std::string preco, Endereco enderecoDaCasa){
    setNumPavimentos(numPavimentos);
    setNumQuartos(numQuartos);
    setareaDoTerreno(areaDoTerreno);
    setaAreaConstruida(areaConstruida);
    setValor(preco);
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

std::string Casa::getCasa(){
    return "\n  Número de pavimentos: " + numPavimentos +
    "\n  Número de quartos:  " + numQuartos +
    "\n  Área do terreno:  " + areaDoTerreno +
    "\n  Área construída:  " + areaConstruida +
    "\n  Valor:  " + valor;
}

std::string Casa::getCasaAjustadaParaArquivo(){
    return numPavimentos +
    "\n" + numQuartos +
    "\n" + areaDoTerreno +
    "\n" + areaConstruida +
    "\n" + valor + "\n";
}

// virtual
std::string Casa::getDados()
{
    return  endereco.getEndereco() + getCasa();
}

// virtual
std::string Casa::enviarParaArquivo()
{
    return  endereco.getEnderecoAjustadoParaArquivo() + "\n" + getCasaAjustadaParaArquivo();
}


