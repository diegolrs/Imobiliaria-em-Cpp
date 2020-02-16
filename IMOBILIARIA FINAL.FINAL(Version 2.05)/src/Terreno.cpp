#include "Terreno.h"

Terreno::Terreno()
{
    //ctor
}

Terreno::Terreno(std::string area, std::string valor, std::string tipoOferta, Endereco enderecoDoTerreno)
{
    setArea(area);
    setValor(valor);
    setTipoOferta(tipoOferta);
    setEndereco(enderecoDoTerreno);
}
//-----------------------------  SETS  -----------------------------
void Terreno::setArea(std::string area){this->area = area;}
//-----------------------------  GETS  -------------------------------
std::string Terreno::getArea(){return area;}

std::string Terreno::getTerreno()
{
    return "\n  Área do terreno: " + area +
    "\n  Disponível como: " + tipoOferta +
    "\n  Valor: " + valor;
}

std::string Terreno::getTerrenoAjustadoParaArquivo()
{
    return  area + "\n" +
            valor + "\n" +
            tipoOferta + "\n";
}

// virtual
std::string Terreno::getDados(){return  endereco.getEndereco() + getTerreno();}

std::string Terreno::enviarParaArquivo(){return  endereco.getEnderecoAjustadoParaArquivo() + "\n" + getTerrenoAjustadoParaArquivo();}
