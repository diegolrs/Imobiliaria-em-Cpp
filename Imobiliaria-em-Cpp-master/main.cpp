#include <iostream>
#include <locale>

#include "Endereco.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese"); //Acentuação

    Endereco *endereco1 = new Endereco("Rua dos bobos", "Colinas do Sul", "58049-321", "Jhon Person", "50");

    Casa *casa1 = new Casa("4", "5", "523.5m", "520m", "250000", *endereco1);
    Apartamento *apartamento1 = new Apartamento("Norte", "5", "400", "2", "84", "500000", *endereco1);
    Terreno *terreno1 = new Terreno("100.5", "100000", *endereco1);

    //cout<<casa1->getEndereco();
    cout<<"--------------------Casa--------------------"<<endl;
    cout<<casa1->getCasa()<<"\n"<<endl;

    cout<<"--------------------Apartamento--------------------"<<endl;
    cout<<apartamento1->getApartamento()<<"\n"<<endl;

    cout<<"--------------------Terreno--------------------"<<endl;
    cout<<terreno1->getTerreno()<<endl;

    return 0;
}
