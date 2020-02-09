#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
    public:
        Endereco();
        Endereco(std::string nomeDaRua, std::string bairro, std::string CEP, std::string cidade, std::string numeroImovel);

        std::string getNomeDaRua();
        std::string getBairro();
        std::string getCEP();
        std::string getCidade();
        std::string getNumeroImovel();
        std::string getEndereco();

        void setNomeDaRua(std::string entrada);
        void setBairro(std::string entrada);
        void setCEP(std::string entrada);
        void setCidade(std::string entrada);
        void setNumeroImovel(std::string entrada);
        void setEndereco(Endereco entrada);

    private:
        std::string nomeDaRua;
        std::string numeroImovel;
        std::string bairro;
        std::string CEP;
        std::string cidade;

};

#endif // ENDERECO_H
