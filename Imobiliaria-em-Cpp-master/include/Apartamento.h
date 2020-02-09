#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Endereco.h"
#include <string>

class Apartamento : public Endereco
{
    public:
        Apartamento();
        Apartamento(std::string posicao, std::string numQuartos, std::string valorCondominio, std::string vagasGaragem,
                    std::string area, std::string preco, Endereco enderecoDoApartamento);

        void setPosicao(std::string posicao);
        void setNumQuartos(std::string numQuartos);
        void setValorCondominio(std::string valorCondominio);
        void setVagasGaragem(std::string vagasGaragem);
        void setArea(std::string area);
        void setPreco(std::string preco);

        std::string getPosicao();
        std::string getNumQuartos();
        std::string getValorCondominio();
        std::string getVagasGaragem();
        std::string getArea();
        std::string getApartamento();
        std::string getPreco();

    private:
        std::string posicao;
        std::string numQuartos;
        std::string valorCondominio;
        std::string vagasGaragem;
        std::string area;
        std::string preco;
};

#endif // APARTAMENTO_H
