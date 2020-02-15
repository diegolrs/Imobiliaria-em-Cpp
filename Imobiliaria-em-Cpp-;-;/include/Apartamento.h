#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"
#include <string>

class Apartamento : public Imovel
{
    public:
        Apartamento();
        Apartamento(std::string posicao, std::string numQuartos, std::string valorCondominio, std::string vagasGaragem,
                    std::string area, std::string valor, Endereco enderecoDoApartamento);

        void setPosicao(std::string posicao);
        void setNumQuartos(std::string numQuartos);
        void setValorCondominio(std::string valorCondominio);
        void setVagasGaragem(std::string vagasGaragem);
        void setArea(std::string area);

        std::string getPosicao();
        std::string getNumQuartos();
        std::string getValorCondominio();
        std::string getVagasGaragem();
        std::string getArea();
        std::string getApartamento();
        std::string getApartamentoAjustadoParaArquivo();

        //virtual
        std::string getDados();
        std::string enviarParaArquivo();

    private:
        std::string posicao;
        std::string numQuartos;
        std::string valorCondominio;
        std::string vagasGaragem;
        std::string area;
};

#endif // APARTAMENTO_H
