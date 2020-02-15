#include "Interface.h"

using namespace std;

Interface::Interface()
{
    //ctor
}
void Interface::menuPrincipal()
{
    int opcao;
    while(1){
        cout<<"-------------MENU PRINCIPAL-------------\n"<<endl;
        cout<<"\t1-Cadastrar"<<endl;
        cout<<"\t2-Consultar"<<endl;
        cout<<"\t3-Editar"<<endl;
        cout<<"\t4-Deletar"<<endl;
        cout<<"\t5-Sair"<<endl;

        cout<<"Escolha: ";
        cin>>opcao;

        switch(opcao){
        case 1:
            system("cls");
            menuCadastro();
            system("cls");
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            return;
        default:
            system("cls");
            cout<<"Opção Inválida."<<endl;
            system("pause");
            system("cls");
        }
    }
}

void Interface::menuCadastro(){
    int opcao;
    while(1){
        cout<<"-------------MENU DO CADASTRO-------------\n"<<endl;
        cout<<"\t1-Cadastrar casa"<<endl;
        cout<<"\t2-Cadastrar apartamento"<<endl;
        cout<<"\t3-Cadastrar terreno"<<endl;
        cout<<"\t4-voltar"<<endl;

        cout<<"Escolha: ";
        cin>>opcao;

        switch(opcao){
        case 1:
            system("cls");
            break;
        case 2:
            system("cls");
            break;
        case 3:
            system("cls");
            break;
        case 4:
            break;
        }
        break;
    }
}
