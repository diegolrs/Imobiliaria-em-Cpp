#include <iostream>
#include <locale>
#include <vector>
#include <fstream>

#include "SistemaImobiliaria.h"
#include "Interface.h"
#include "Imovel.h"
#include "Endereco.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese"); //Acentuação

    SistemaImobiliaria adm;

    adm.lerArquivo();
    adm.menuPrincipal();
// ********************************************   OBJETOS PARA TESTE (ESCRITA)    ******************************************************
/*
    Endereco *endereco1 = new Endereco("Rua dos bobos", "Colinas do Sul", "58049-321", "Jhon Person", "50");
    Endereco *endereco2 = new Endereco("Rua dos bobos2", "Colinas do Sul2", "58049-3212", "Jhon Person2", "502");
    Endereco *endereco3 = new Endereco("Rua dos bobos3", "Colinas do Sul3", "58049-3213", "Jhon Person3", "503");

    Casa *casa1 = new Casa("4", "5", "523.5m", "520m", "250000", *endereco1);
    Casa *casa2 = new Casa("42", "52", "523.5m2", "520m2", "2500002", *endereco2);
    Casa *casa3 = new Casa("43", "53", "523.5m3", "520m3", "2500003", *endereco3);

    Apartamento *apartamento1 = new Apartamento("APNorte", "5", "400", "2", "84", "500000", *endereco1);

    Terreno *terreno1 = new Terreno("TR100.5", "100000", *endereco1);
    Terreno *terreno2 = new Terreno("TR100.52", "1000002", *endereco2);


    todasAsCasas.push_back(*casa1);
    todasAsCasas.push_back(*casa2);
    todasAsCasas.push_back(*casa3);

    todosOsApartamentos.push_back(*apartamento1);

    todosOsTerrenos.push_back(*terreno1);
    todosOsTerrenos.push_back(*terreno2);
*/
//  ***********************************************************************************************************************
/*
    SistemaImobiliaria adm1;

    adm1.lerArquivo1();
    Endereco *endereco1 = new Endereco("Rua 1", "Colinas do Sul", "58049-321", "Jhon Person", "501");
    Endereco *endereco2 = new Endereco("Rua 2", "Colinas do Norte", "58049-3212", "Jhon Person2", "502");
    Endereco *endereco3 = new Endereco("Rua 3", "Colinas do Leste", "58049-3213", "Jhon Person3", "503");

    Imovel *imovel1 = new Imovel("250000", 1, 1, 1, 0, *endereco1);

    Imovel *casa1 = new Casa("4", "5", "523.5m", "520m", imovel1);

    //Imovel *apartamento1 = new Apartamento("APNorte", "5", "400", "2", "84", "500000", *endereco2);

    //Imovel *terreno1 = new Terreno("TR100.5", "100000", *endereco3);

    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<casa1->getDescricao()<<endl;

    adm1.cadastraImovel(casa1);
    //adm1.cadastraImovel(apartamento1);
    //adm1.cadastraImovel(terreno1);

    adm1.salvarNoArquivo1();
*/
    return 0;
}
