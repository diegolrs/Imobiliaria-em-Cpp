#ifndef CASA_H
#define CASA_H
#include "Imovel.h"
#include <string>

class Casa : public Imovel
{
    public:
        Casa();
        Casa(std::string numPavimentos, std::string numQuartos, std::string areaDeTerreno,
             std::string areaConstruida, std::string valor, std::string tipoOferta, Endereco enderecoDaCasa);

        Casa(std::string numPavimentos, std::string numQuartos, std::string areaDeTerreno,
             std::string areaConstruida, Imovel *imovel);


        void setNumPavimentos(std::string entrada);
        void setNumQuartos(std::string entrada);
        void setAreaDoTerreno(std::string entrada);
        void setAreaConstruida(std::string entrada);

        std::string getNumPavimentos();
        std::string getNumQuartos();
        std::string getAreaDoTerreno();
        std::string getAreaConstruida();
        std::string getCasa();
        std::string getCasaAjustadaParaArquivo();

        // virtual
        std::string getDescricao();
        std::string getDados();
        std::string enviarParaArquivo();


    private:
        std::string numPavimentos;
        std::string numQuartos;
        std::string areaDoTerreno;
        std::string areaConstruida;
        Endereco enderecoDaCasa;
};

#endif // CASA_H
