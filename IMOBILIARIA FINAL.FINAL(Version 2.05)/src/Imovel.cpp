#include "Imovel.h"
//-------------------------  CONSTRUTORES  -------------------------
Imovel::Imovel()
{
    std::string valor = "";
    int tipoOferta = 0;
    int tipoDeImovel = 0;
    int venda = 0;
    int  aluguel = 0;
    Endereco endereco = Endereco();
}

Imovel::Imovel(std::string valor, std::string tipoOferta,int tipoDeImovel, int venda,int  aluguel, Endereco endereco)
{
    setValor(valor);
    setTipoOferta(tipoOferta);
    setVenda(venda);
    setAluguel(aluguel);
    setEndereco(endereco);

}
//-----------------------------  SETS  -----------------------------
void Imovel::setVenda(int venda){this->venda = venda;}

void Imovel::setAluguel(int venda){this->venda = venda;}

void Imovel::setValor(std::string valor){this->valor = valor;}

void Imovel::setTipoOferta(std::string tipoOferta){this->tipoOferta = tipoOferta;}

void Imovel::setEndereco(Endereco endereco){this->endereco = endereco;}

void Imovel::setTipoDeImovel(int tipoDeImovel){this->tipoDeImovel = tipoDeImovel;}

//-----------------------------  GETS  -------------------------------
int Imovel::getVenda(){return venda;}

int Imovel::getAluguel(){return aluguel;}

std::string Imovel::getValor(){return valor;}

std::string Imovel::getTipoOferta(){return tipoOferta;}

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
