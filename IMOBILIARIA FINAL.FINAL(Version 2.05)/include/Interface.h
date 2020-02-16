#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <windows.h>

class Interface
{
    public:
        Interface();

        void menuPrincipal();
        virtual void salvarNoArquivo()=0;
//--------------- CADASTRO ---------------
        void menuCadastro();
        virtual void cadastrarCasa()=0;
        virtual void cadastrarApartamento()=0;
        virtual void cadastrarTerreno()=0;
//--------------- CONSULTA ---------------
        void menuDeConsulta();

        virtual void buscaVenda()=0;
        virtual void buscaAluguel()=0;

        void menuCosultaCasa();
        virtual void buscaCasaPorBairro()=0;
        virtual void buscaCasaApenasVenda()=0;
        virtual void buscaCasaApenasAluguel()=0;
        virtual void buscaCasaValorMinimo()=0;
        virtual void buscaCasaValorMaximo()=0;
        virtual void listarTodasAsCasas()=0;

        void menuCosultaApartamento();
        virtual void buscaApartamentoPorBairro()=0;
        virtual void buscaApartamentoApenasVenda()=0;
        virtual void buscaApartamentoApenasAluguel()=0;
        virtual void buscaApartamentoValorMinimo()=0;
        virtual void buscaApartamentoValorMaximo()=0;
        virtual void listarTodosOsApartamentos()=0;

        void menuCosultaTerreno();
        virtual void buscaTerrenoPorBairro()=0;
        virtual void buscaTerrenoApenasVenda()=0;
        virtual void buscaTerrenoApenasAluguel()=0;
        virtual void buscaTerrenoValorMinimo()=0;
        virtual void buscaTerrenoValorMaximo()=0;
        virtual void listarTodosOsTerreno()=0;

//--------------- EDITAR ---------------
        virtual void editarCasa()=0;
        virtual void editarApartamento()=0;
        virtual void editarTerreno()=0;

        virtual void buscaValorMinimo()=0;
        virtual void buscaValorMaximo()=0;

        void menuDeEditar();

        void menuDeletar();
        virtual void deletarCasa()=0;
        virtual void deletarApartamento()=0;
        virtual void deletarTerreno()=0;

        virtual void mostrarTodos()=0;

    private:

};

#endif // INTERFACE_H
