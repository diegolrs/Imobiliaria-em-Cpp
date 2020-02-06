#include <iostream>
#include "Casa.h"
#include "Endereco.h"
#include "locale.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, ""); //Acentuação

    Endereco *endereco1 = new Endereco("Rua dos bobos", "Colinas do Sul", "58049-321", "Jhon Person", "50");
    Casa *casa1 = new Casa("4", "5", "523.5m", "520m", *endereco1);

    //cout<<casa1->getEndereco();
    cout<<casa1->getCasa();
    return 0;
}
