#include "Apartamento.h"

Apartamento::Apartamento()
{

}

Apartamento::Apartamento(std::string posicao, std::string numQuartos, std::string valorCondominio, std::string vagasGaragem,
                         std::string area, std::string preco,Endereco enderecoDoApartamento){
    setPosicao(posicao);
    setNumQuartos(numQuartos);
    setValorCondominio(valorCondominio);
    setVagasGaragem(vagasGaragem);
    setArea(area);
    setPreco(preco);
    setEndereco(enderecoDoApartamento);
}

//-----------------------------  SETS  -----------------------------
void Apartamento::setPosicao(std::string posicao){
    this->posicao = posicao;
}

void Apartamento::setNumQuartos(std::string numQuartos){
    this->numQuartos = numQuartos;
}

void Apartamento::setValorCondominio(std::string valorCondominio){
    this->valorCondominio = valorCondominio;
}

void Apartamento::setVagasGaragem(std::string vagasGaragem){
    this->vagasGaragem = vagasGaragem;
}

void Apartamento::setArea(std::string area){
    this->area = area;
}

void Apartamento::setPreco(std::string preco){
    this->preco = preco;
}
//-----------------------------  GETS  -------------------------------
std::string Apartamento::getPosicao(){
    return posicao;
}

std::string Apartamento::getNumQuartos(){
    return numQuartos;
}

std::string Apartamento::getValorCondominio(){
    return valorCondominio;
}

std::string Apartamento::getVagasGaragem(){
    return vagasGaragem;
}

std::string Apartamento::getArea(){
    return area;
}

std::string Apartamento::getPreco(){
    return preco;
}

std::string Apartamento::getApartamento(){
    return getEndereco() +
    "\n  Posição: " + posicao +
    "\n  Número de quarto(s):  " + numQuartos +
    "\n  Valor do condomínio:  " + valorCondominio +
    "\n  Vagas da garagem:  " + vagasGaragem +
    "\n  Área:  " + area +
    "\n  Preço:  " + preco;
}
