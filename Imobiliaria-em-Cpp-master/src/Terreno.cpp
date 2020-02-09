#include "Terreno.h"

Terreno::Terreno()
{
    //ctor
}

Terreno::Terreno(std::string area, std::string preco, Endereco enderecoDoTerreno){
    setArea(area);
    setPreco(preco);
    setEndereco(enderecoDoTerreno);
}
//-----------------------------  SETS  -----------------------------
void Terreno::setArea(std::string area){
    this->area = area;
}

void Terreno::setPreco(std::string preco){
    this->preco = preco;
}

//-----------------------------  GETS  -------------------------------
std::string Terreno::getArea(){
    return area;
}

std::string Terreno::getPreco(){
    return preco;
}

std::string Terreno::getTerreno(){
    return  getEndereco() +
    "\n  Área do terreno: " + area +
    "\n  Preco: " + preco;
}
