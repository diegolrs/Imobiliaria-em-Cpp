#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H

#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

#include <vector>
#include <fstream>
#include <iostream>

class SistemaImobiliaria
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

        void lerArquivo();
        void salvarNoArquivo();

        void lerArquivo1();
        void salvarNoArquivo1();

    private:
        std::vector<Imovel> todosOsImoveis;

        std::vector<Casa> todasAsCasas;
        std::vector<Apartamento> todosOsApartamentos;
        std::vector<Terreno> todosOsTerrenos;

        std::fstream arquivo;
        std::fstream arquivo1;

};

#endif // SISTEMAIMOBILIARIA_H
