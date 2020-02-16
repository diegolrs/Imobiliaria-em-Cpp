#include "Casa.h"

Casa::Casa()
{
    Endereco();
    setNumPavimentos("0");
    setNumQuartos("0");
    setAreaDoTerreno("0");
    setAreaConstruida("0");
    setValor("0");

}

Casa::Casa(std::string numPavimentos, std::string numQuartos, std::string areaDoTerreno,
           std::string areaConstruida, std::string preco, std::string tipoOferta,Endereco enderecoDaCasa){
    setNumPavimentos(numPavimentos);
    setNumQuartos(numQuartos);
    setAreaDoTerreno(areaDoTerreno);
    setAreaConstruida(areaConstruida);
    setValor(preco);
    setTipoOferta(tipoOferta);
    setEndereco(enderecoDaCasa);
}

Casa::Casa(std::string numPavimentos, std::string numQuartos, std::string areaDeTerreno,
           std::string areaConstruida, Imovel *imovel)
{
    setNumPavimentos(numPavimentos);
    setNumQuartos(numQuartos);
    setAreaDoTerreno(areaDoTerreno);
    setAreaConstruida(areaConstruida);
    setTipoDeImovel(imovel->getTipoDeImovel());
    setValor(imovel->getValor());
    setEndereco(imovel->getEndereco());

}

//-----------------------------  SETS  -----------------------------
void Casa::setNumPavimentos(std::string entrada){
    numPavimentos = entrada;
}

void Casa::setNumQuartos(std::string entrada){
    numQuartos = entrada;
}

void Casa::setAreaDoTerreno(std::string entrada){
    areaDoTerreno = entrada;
}

void Casa::setAreaConstruida(std::string entrada){
    areaConstruida = entrada;
}
//-----------------------------  GETS  -------------------------------
std::string Casa::getNumPavimentos(){
    return numPavimentos;
}

std::string Casa::getNumQuartos(){return numQuartos;}

std::string Casa::getAreaDoTerreno(){return areaDoTerreno;}

std::string Casa::getAreaConstruida(){return areaConstruida;}

std::string Casa::getCasa(){
    return "\n  Número de pavimentos: " + numPavimentos +
    "\n  Número de quartos:  " + numQuartos +
    "\n  Área do terreno:  " + areaDoTerreno +
    "\n  Área construída:  " + areaConstruida +
    "\n  Disponível como: " + tipoOferta +
    "\n  Valor:  " + valor;
}

std::string Casa::getCasaAjustadaParaArquivo(){
    return numPavimentos +
    "\n" + numQuartos +
    "\n" + areaDoTerreno +
    "\n" + areaConstruida +
    "\n" + valor +
    "\n" + tipoOferta + "\n";
}

std::string Casa::getDescricao()
{
    return endereco.getEndereco() +
    "\n  Número de pavimentos: " + numPavimentos +
    "\n  Número de quartos:  " + numQuartos +
    "\n  Área do terreno:  " + areaDoTerreno +
    "\n  Área construída:  " + areaConstruida +
    "\n  Valor:  " + valor +
    "\n  Disponível como: " + tipoOferta;
}

// virtual
std::string Casa::getDados(){return  endereco.getEndereco() + getCasa();}

// virtual
std::string Casa::enviarParaArquivo(){return  endereco.getEnderecoAjustadoParaArquivo() + "\n" + getCasaAjustadaParaArquivo();}

