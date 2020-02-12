#include "Endereco.h"
#include <iostream>

//-------------------------  CONSTRUTORES  -------------------------
Endereco::Endereco()
{
    setNomeDaRua("vazio");
    setBairro("vazio");
    setCEP("vazio");
    setCidade("vazio");
    setNumeroImovel("0");
}

Endereco::Endereco(std::string nomeDaRua, std::string bairro, std::string CEP, std::string cidade, std::string numeroImovel)
{
    setNomeDaRua(nomeDaRua);
    setBairro(bairro);
    setCEP(CEP);
    setCidade(cidade);
    setNumeroImovel(numeroImovel);
}
//-----------------------------  GETS  -----------------------------

std::string Endereco::getNomeDaRua()
{
    return nomeDaRua;
}

std::string Endereco::getBairro()
{
    return bairro;
}

std::string Endereco::getCEP()
{
    return CEP;
}

std::string Endereco::getCidade()
{
    return cidade;
}

std::string Endereco::getNumeroImovel()
{
    return numeroImovel;
}

std::string Endereco::getEndereco(){
    return "  Rua: " + nomeDaRua +
    "\n  Bairro: " + bairro +
    "\n  CEP:  " + CEP +
    "\n  Cidade: " + cidade +
    "\n  N° do Imóvel:  " + numeroImovel;
}

std::string Endereco::getEnderecoAjustadoParaArquivo(){
    return nomeDaRua +
    "\n" + bairro +
    "\n" + CEP +
    "\n" + cidade +
    "\n" + numeroImovel;
}

// virtual
std::string Endereco::getDados(){
    return getEndereco();
}
//-----------------------------  SETS  -----------------------------

void Endereco::setNomeDaRua(std::string entrada){
    nomeDaRua = entrada;
}

void Endereco::setBairro(std::string entrada){
    bairro = entrada;
}

void Endereco::setCEP(std::string entrada){
    CEP = entrada;
}

void Endereco::setCidade(std::string entrada){
    cidade = entrada;
}

void Endereco::setNumeroImovel(std::string entrada){
    numeroImovel = entrada;
}

void Endereco::setEndereco(Endereco entrada)
{
    this->setCidade(entrada.cidade);
    this->setBairro(entrada.bairro);
    this->setNomeDaRua(entrada.nomeDaRua);
    this->setNumeroImovel(entrada.numeroImovel);
    this->setCEP(entrada.CEP);
}
