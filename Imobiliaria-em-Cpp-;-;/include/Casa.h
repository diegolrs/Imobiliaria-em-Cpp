#ifndef CASA_H
#define CASA_H
#include "Imovel.h"
#include <string>

class Casa : public Imovel
{
    public:
        Casa();
        Casa(std::string numPavimentos, std::string numQuartos, std::string areaDeTerreno,
             std::string areaConstruida, std::string valor, Endereco enderecoDaCasa);

        void setNumPavimentos(std::string entrada);
        void setNumQuartos(std::string entrada);
        void setareaDoTerreno(std::string entrada);
        void setaAreaConstruida(std::string entrada);

        std::string getNumPavimentos();
        std::string getNumQuartos();
        std::string getareaDoTerreno();
        std::string getaAreaConstruida();
        std::string getCasa();
        std::string getCasaAjustadaParaArquivo();

        // virtual
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
