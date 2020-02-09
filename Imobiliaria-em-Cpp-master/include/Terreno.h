#ifndef TERRENO_H
#define TERRENO_H
#include "Endereco.h"
#include<string.h>

class Terreno : public Endereco
{
    public:
        Terreno();
        Terreno(std::string area, std::string preco, Endereco enderecoDoTerreno);

        void setArea(std::string area);
        void setPreco(std::string preco);

        std::string getArea();
        std::string getPreco();
        std::string getTerreno();

    private:
        std::string area;
        std::string preco;
};

#endif // TERRENO_H
