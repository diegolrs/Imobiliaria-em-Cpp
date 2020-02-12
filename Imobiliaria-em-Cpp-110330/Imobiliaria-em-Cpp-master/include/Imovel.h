#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"

class Imovel
{
    public:
        Imovel();

        void setIMOVEL_PARA_VENDER(int IMOVEL_PARA_VENDER);
        void setIMOVEL_PARA_ALUGUEL(int IMOVEL_PARA_ALUGUEL);
        void setValor(std::string valor);
        void setTipoOferta(int tipoOferta);
        void setEndereco(Endereco endereco);

        int getIMOVEL_PARA_VENDER();
        int getIMOVEL_PARA_ALUGUEL();
        std::string getValor();
        int getTipoOferta();
        Endereco getEndereco();

    protected:
        int IMOVEL_PARA_VENDER;
        int IMOVEL_PARA_ALUGUEL;
        std::string valor;
        int tipoOferta;
        Endereco endereco;
};

#endif // IMOVEL_H
