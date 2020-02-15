#include "Apartamento.h"

Apartamento::Apartamento()
{

}

Apartamento::Apartamento(std::string posicao, std::string numQuartos, std::string valorCondominio,
                         std::string vagasGaragem, std::string area, std::string valor, Endereco enderecoDoApartamento)
{
    setPosicao(posicao);
    setNumQuartos(numQuartos);
    setValorCondominio(valorCondominio);
    setVagasGaragem(vagasGaragem);
    setArea(area);
    setValor(valor);
    setEndereco(enderecoDoApartamento);
}

//-----------------------------  SETS  -----------------------------
void Apartamento::setPosicao(std::string posicao)
{
    this->posicao = posicao;
}

void Apartamento::setNumQuartos(std::string numQuartos)
{
    this->numQuartos = numQuartos;
}

void Apartamento::setValorCondominio(std::string valorCondominio)
{
    this->valorCondominio = valorCondominio;
}

void Apartamento::setVagasGaragem(std::string vagasGaragem)
{
    this->vagasGaragem = vagasGaragem;
}

void Apartamento::setArea(std::string area)
{
    this->area = area;
}
//-----------------------------  GETS  -------------------------------
std::string Apartamento::getPosicao()
{
    return posicao;
}

std::string Apartamento::getNumQuartos()
{
    return numQuartos;
}

std::string Apartamento::getValorCondominio()
{
    return valorCondominio;
}

std::string Apartamento::getVagasGaragem()
{
    return vagasGaragem;
}

std::string Apartamento::getArea()
{
    return area;
}

std::string Apartamento::getApartamento()
{
    return "\n  Posi��o: " + posicao +
    "\n  N�mero de quarto(s):  " + numQuartos +
    "\n  Valor do condom�nio:  " + valorCondominio +
    "\n  Vagas da garagem:  " + vagasGaragem +
    "\n  �rea:  " + area +
    "\n  Pre�o:  " + valor;
}

std::string Apartamento::getApartamentoAjustadoParaArquivo()
{
    return  posicao +
    "\n" + numQuartos +
    "\n" + valorCondominio +
    "\n" + vagasGaragem +
    "\n" + area +
    "\n" + valor + "\n";
}
// virtual
std::string Apartamento::getDados()
{
    return endereco.getDados() + getApartamento();
}

std::string Apartamento::enviarParaArquivo()
{
    return endereco.getEnderecoAjustadoParaArquivo() + "\n" + getApartamentoAjustadoParaArquivo();
}
