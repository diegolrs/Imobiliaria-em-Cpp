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
        void setTipoDeImovel(int tipoDeImovel);

        int getIMOVEL_PARA_VENDER();
        int getIMOVEL_PARA_ALUGUEL();
        std::string getValor();
        int getTipoOferta();
        int getTipoDeImovel();
        Endereco getEndereco();

        virtual std::string getDescricao();
        virtual std::string enviarParaArquivo();

    protected:
        int IMOVEL_PARA_VENDER;
        int IMOVEL_PARA_ALUGUEL;
        std::string valor;
        int tipoOferta;
        int tipoDeImovel;
        Endereco endereco;
};

#endif // IMOVEL_H
