#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H

#include "Interface.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

#include <vector>
#include <fstream>
#include <iostream>
#include <locale>
#include <sstream>

class SistemaImobiliaria : public Interface
{
    public:
        SistemaImobiliaria();
//-----------------------------  GETS  -------------------------------
        std::vector<Imovel> getTodosOsImoveis();

        std::vector<Casa> getTodasAsCasas();
        std::vector<Apartamento> getTodosOsApartamentos();
        std::vector<Terreno> getTodosOsTerrenos();

//-----------------------------  MÉTODOS  -------------------------------
        void cadastraImovel(Imovel *imovel);

        void cadastraCasa(Casa *casa);
        void cadastraApartamento(Apartamento *apartamento);
        void cadastraTerreno(Terreno *terreno);

        void mostrarTodasAsCasas();
        void mostrarTodosOsApartamentos();
        void mostrarTodosOsTerrenos();

        void buscaVenda();
        void buscaAluguel();

        void lerArquivo();
        void salvarNoArquivo();
//-----------------------------  INTERFACE -------------------------------
        void mostrarTodos();

        //---CADASTRO------//
        void cadastrarCasa();
        void cadastrarApartamento();
        void cadastrarTerreno();

        //---CONSULTA CASA------//
        void buscaCasaPorBairro();
        void buscaCasaApenasVenda();
        void buscaCasaApenasAluguel();
        void buscaCasaValorMinimo();
        void buscaCasaValorMaximo();
        void listarTodasAsCasas();

        //---CONSULTA APARTAMENTO------//
        void buscaApartamentoPorBairro();
        void buscaApartamentoApenasVenda();
        void buscaApartamentoApenasAluguel();
        void buscaApartamentoValorMinimo();
        void buscaApartamentoValorMaximo();
        void listarTodosOsApartamentos();

        //---CONSULTA TERRENO------//
        void buscaTerrenoPorBairro();
        void buscaTerrenoApenasVenda();
        void buscaTerrenoApenasAluguel();
        void buscaTerrenoValorMinimo();
        void buscaTerrenoValorMaximo();
        void listarTodosOsTerreno();

        //------EDITAR------//
        void editarCasa();
        void editarApartamento();
        void editarTerreno();

        void buscaValorMinimo();
        void buscaValorMaximo();

        //------DELETE------//
        void deletarCasa();
        void deletarApartamento();
        void deletarTerreno();

//-----------------------------  VARIÁVEIS -------------------------------
    private:
        std::vector<Imovel> todosOsImoveis;

        std::vector<Casa> todasAsCasas;
        std::vector<Apartamento> todosOsApartamentos;
        std::vector<Terreno> todosOsTerrenos;

        std::fstream arquivo;
        std::fstream arquivo1;
};

#endif // SISTEMAIMOBILIARIA_H
