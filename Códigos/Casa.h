#ifndef CASA_H
#define CASA_H
#include "Endereco.h"
#include <string>

class Casa : public Endereco
{
    public:
        Casa();
        Casa(std::string numPavimentos, std::string numQuartos, std::string areaDeTerreno, std::string areaConstruida, Endereco enderecoDaCasa);


        void setNumPavimentos(std::string entrada);
        void setNumQuartos(std::string entrada);
        void setareaDoTerreno(std::string entrada);
        void setaAreaConstruida(std::string entrada);

        std::string getNumPavimentos();
        std::string getNumQuartos();
        std::string getareaDoTerreno();
        std::string getaAreaConstruida();
        std::string getCasa();

    private:
        std::string numPavimentos;
        std::string numQuartos;
        std::string areaDoTerreno;
        std::string areaConstruida;
        Endereco enderecoDaCasa;
};

#endif // CASA_H
