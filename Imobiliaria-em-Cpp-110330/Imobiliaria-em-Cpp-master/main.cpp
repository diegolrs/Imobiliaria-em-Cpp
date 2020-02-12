#include <iostream>
#include <locale>
#include <vector>
#include <fstream>

#include "Endereco.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

/*

#ifdef WIN32
   system ("pause");
#endif

*/

ofstream arquivo ("teste.txt", ios::out);

int main()
{
    setlocale(LC_ALL, "Portuguese"); //Acentuação
    int tamanhoVectorCasa, tamanhoVectorTerreno, tamanhoVectorApartamento;

    Endereco *endereco1 = new Endereco("Rua dos bobos", "Colinas do Sul", "58049-321", "Jhon Person", "50");
    Endereco *endereco2 = new Endereco("Rua dos bobos2", "Colinas do Sul2", "58049-3212", "Jhon Person2", "502");
    Endereco *endereco3 = new Endereco("Rua dos bobos3", "Colinas do Sul3", "58049-3213", "Jhon Person3", "503");

    Casa *casa1 = new Casa("4", "5", "523.5m", "520m", "250000", *endereco1);
    Casa *casa2 = new Casa("42", "52", "523.5m2", "520m2", "2500002", *endereco2);
    Casa *casa3 = new Casa("43", "53", "523.5m3", "520m3", "2500003", *endereco3);

    Apartamento *apartamento1 = new Apartamento("APNorte", "5", "400", "2", "84", "500000", *endereco1);

    Terreno *terreno1 = new Terreno("TR100.5", "100000", *endereco1);
    Terreno *terreno2 = new Terreno("TR100.52", "1000002", *endereco2);

    // ---------------- Vectors ----------------
    vector<Casa> todasAsCasas;
    vector<Apartamento> todosOsApartamentos;
    vector<Terreno> todosOsTerrenos;

    todasAsCasas.push_back(*casa1);
    todasAsCasas.push_back(*casa2);
    todasAsCasas.push_back(*casa3);

    todosOsApartamentos.push_back(*apartamento1);

    todosOsTerrenos.push_back(*terreno1);
    todosOsTerrenos.push_back(*terreno2);

    tamanhoVectorCasa = todasAsCasas.size();
    tamanhoVectorApartamento =  todosOsApartamentos.size();
    tamanhoVectorTerreno = todosOsTerrenos.size();

    // salvando nos arquivos
    for(int i=0; i< tamanhoVectorCasa; i++){
        arquivo<< "Casa \n" << todasAsCasas[i].enviarParaArquivo();
    }

    for(int i=0; i< tamanhoVectorApartamento; i++){
       arquivo<< "Apartamento \n" << todosOsApartamentos[i].enviarParaArquivo();
    }
    for(int i=0; i< tamanhoVectorTerreno; i++){
        arquivo<< "Terreno \n" << todosOsTerrenos[i].enviarParaArquivo();
    }

    // ------------- printando os dados -----------

    cout<<"--------------------Casa--------------------"<<endl;

    for(int i=0; i< tamanhoVectorCasa; i++){
        cout<< "\n" << todasAsCasas[i].getDados()<< endl;
    }

    cout<<"--------------------Apartamento--------------------"<<endl;

    for(int i=0; i< tamanhoVectorApartamento; i++){
        cout<< "\n" << todosOsApartamentos[i].getDados()<< endl;
    }

    cout<<"--------------------Terreno--------------------"<<endl;

    for(int i=0; i< tamanhoVectorTerreno; i++){
        cout<< "\n" << todosOsTerrenos[i].getDados()<< endl;
    }

    arquivo.close();
    return 0;
}
