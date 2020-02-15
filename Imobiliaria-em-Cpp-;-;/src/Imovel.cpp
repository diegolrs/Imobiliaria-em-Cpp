#include "Imovel.h"
//-------------------------  CONSTRUTORES  -------------------------
Imovel::Imovel()
{
    //ctor
}
//-----------------------------  SETS  -----------------------------
void Imovel::setIMOVEL_PARA_VENDER(int IMOVEL_PARA_VENDER){this->IMOVEL_PARA_VENDER = IMOVEL_PARA_VENDER;}

void Imovel::setIMOVEL_PARA_ALUGUEL(int IMOVEL_PARA_ALUGUEL){this->IMOVEL_PARA_ALUGUEL = IMOVEL_PARA_ALUGUEL;}

void Imovel::setValor(std::string valor){this->valor = valor;}

void Imovel::setTipoOferta(int tipoOferta){this->tipoOferta = tipoOferta;}

void Imovel::setEndereco(Endereco endereco){this->endereco = endereco;}

void Imovel::setTipoDeImovel(int tipoDeImovel){this->tipoDeImovel = tipoDeImovel;}

//-----------------------------  GETS  -------------------------------
int Imovel::getIMOVEL_PARA_VENDER(){return IMOVEL_PARA_VENDER;}

int Imovel::getIMOVEL_PARA_ALUGUEL(){return IMOVEL_PARA_ALUGUEL;}

std::string Imovel::getValor(){return valor;}

int Imovel::getTipoOferta(){return tipoOferta;}

int Imovel::getTipoDeImovel(){return tipoDeImovel;}

std::string Imovel::getDescricao()
{
    return endereco.getEndereco();
}
//-----------------------------  MÉTODOS  -------------------------------
std::string Imovel::enviarParaArquivo()
{
    return endereco.getEnderecoAjustadoParaArquivo();
}

Endereco Imovel::getEndereco(){return endereco;}
