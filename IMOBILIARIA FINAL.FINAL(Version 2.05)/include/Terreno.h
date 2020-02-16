#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"
#include<string.h>

class Terreno : public Imovel
{
    public:
        Terreno();
        Terreno(std::string area, std::string valor, std::string tipoOferta, Endereco enderecoDoTerreno);

        void setArea(std::string area);

        std::string getArea();
        std::string getTerreno();
        std::string getTerrenoAjustadoParaArquivo();

        //virtual
        std::string getDados();
        std::string enviarParaArquivo();

    private:
        std::string area;
};

#endif // TERRENO_H
