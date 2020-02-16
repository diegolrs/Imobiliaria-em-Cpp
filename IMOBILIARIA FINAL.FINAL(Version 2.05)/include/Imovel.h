#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"

class Imovel
{
    public:
        Imovel();
        Imovel(std::string valor, std::string tipoOferta,int tipoDeImovel, int venda,int  aluguel, Endereco endereco);

        void setVenda(int venda);
        void setAluguel(int aluguel);
        void setValor(std::string valor);
        void setTipoOferta(std::string tipoOferta);
        void setEndereco(Endereco endereco);
        void setTipoDeImovel(int tipoDeImovel);

        int getVenda();
        int getAluguel();
        std::string getValor();
        std::string getTipoOferta();
        int getTipoDeImovel();
        Endereco getEndereco();

        virtual std::string getDescricao();
        virtual std::string enviarParaArquivo();

    protected:
        int venda;
        int aluguel;
        std::string valor;
        std::string tipoOferta;
        int tipoDeImovel;
        Endereco endereco;
};

#endif // IMOVEL_H
