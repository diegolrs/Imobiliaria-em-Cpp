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
        cout<<"\t5-Salvar"<<endl;
        cout<<"\t6-Sair"<<endl;

        cout<<"\nEscolha: ";
        cin>>opcao;

        switch(opcao){
        case 1:
            system("cls");
            menuCadastro();
            system("cls");
            break;
        case 2:
            system("cls");
            menuDeConsulta();
            system("cls");
            break;
        case 3:
            system("cls");
            menuDeEditar();
            system("cls");
            break;
        case 4:
            system("cls");
            menuDeletar();
            break;
        case 5:
            system("cls");
            salvarNoArquivo();
            system("pause");
            system("cls");
            break;
        case 6:
            return;
        default:
            system("cls");
            cout<<"Opção Inválida."<<endl;
            system("pause");
            system("cls");
        }
    }
}
//--------------- CADASTRO ---------------
void Interface::menuCadastro()
{
    int opcao;
    while(1){
        cout<<"-------------MENU DO CADASTRO-------------\n"<<endl;
        cout<<"\t1-Cadastrar casa"<<endl;
        cout<<"\t2-Cadastrar apartamento"<<endl;
        cout<<"\t3-Cadastrar terreno"<<endl;
        cout<<"\t4-voltar"<<endl;

        cout<<"\nEscolha: ";
        cin>>opcao;

        switch(opcao){
        case 1:
            system("cls");
            cadastrarCasa();
            break;
        case 2:
            system("cls");
            cadastrarApartamento();
            break;
        case 3:
            system("cls");
            cadastrarTerreno();
            break;
        case 4:
            break;
        }
        break;
    }
}
//--------------- CONSULTA ---------------
void Interface::menuDeConsulta()
{
    while(1){
        int opcao;

        cout<<"-------------MENU DE CONSULTA-------------\n"<<endl;
        cout<<"\t1-Consultar Casa"<<endl;
        cout<<"\t2-Consultar Apartamento"<<endl;
        cout<<"\t3-Consultar Terreno"<<endl;
        cout<<"\t4-Mostrar todos"<<endl;
        cout<<"\t5-Disponíveis para venda"<<endl;
        cout<<"\t6-Disponíveis para aluguel"<<endl;
        cout<<"\t7-Valor Mínimo"<<endl;
        cout<<"\t8-Valor Máximo"<<endl;
        cout<<"\t9-Voltar"<<endl;

        cout<<"\nEscolha: ";
        cin>>opcao;

        switch(opcao){
            case 1:
                system("cls");
                menuCosultaCasa();
                system("cls");
                break;
            case 2:
                system("cls");
                menuCosultaApartamento();
                system("cls");
                break;
            case 3:
                system("cls");
                menuCosultaTerreno();
                system("cls");
                break;
            case 4:
                system("cls");
                mostrarTodos();
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                buscaVenda();
                system("cls");
                break;
            case 6:
                system("cls");
                buscaAluguel();
                system("cls");
                break;
            case 7:
                system("cls");
                buscaValorMinimo();
                system("cls");
                break;
            case 8:
                system("cls");
                buscaValorMaximo();
                system("cls");
                break;
            case 9:
                system("cls");
                break;
            default:
                system("cls");
                cout<<"Opção Inválida."<<endl;
                system("pause");
                system("cls");
        }
        if(opcao == 9){
            break;
        }
    }
}
void Interface::menuCosultaCasa()
{
    int opcao;

    cout<<"-------------MENU DE CONSULTA DE CASA-------------\n"<<endl;
    cout<<"\t1-Buscar por Bairro"<<endl;
    cout<<"\t2-Buscar por Título"<<endl;
    cout<<"\t3-Apenas Venda"<<endl;
    cout<<"\t4-Apenas Aluguel"<<endl;
    cout<<"\t5-Valor Minimo"<<endl;
    cout<<"\t6-Valor Máximo"<<endl;
    cout<<"\t7-Listar todos"<<endl;
    cout<<"\t8-Voltar"<<endl;

    cout<<"\nEscolha: ";
    cin>>opcao;

    switch(opcao){
        case 1:
            system("cls");
            buscaCasaPorBairro();
            system("cls");
            break;
        case 2:
            break;
        case 3:
            system("cls");
            buscaCasaApenasVenda();
            system("cls");
            break;
        case 4:
            system("cls");
            buscaCasaApenasAluguel();
            system("cls");
            break;
        case 5:
            system("cls");
            buscaCasaValorMinimo();
            system("cls");
            break;
        case 6:
            system("cls");
            buscaCasaValorMaximo();
            system("cls");
            break;
        case 7:
            system("cls");
            listarTodasAsCasas();
            system("cls");
            break;
        case 8:
            break;
        default:
            system("cls");
            cout<<"Opção Inválida."<<endl;
            system("pause");
            system("cls");
    }
}
void Interface::menuCosultaApartamento()
{
    int opcao;

    cout<<"-------------MENU DE CONSULTA DE APARTAMENTO-------------\n"<<endl;
    cout<<"\t1-Buscar por Bairro"<<endl;
    cout<<"\t2-Buscar por Título"<<endl;
    cout<<"\t3-Apenas Venda"<<endl;
    cout<<"\t4-Apenas Aluguel"<<endl;
    cout<<"\t5-Valor Minimo"<<endl;
    cout<<"\t6-Valor Máximo"<<endl;
    cout<<"\t7-Listar todos"<<endl;
    cout<<"\t8-Voltar"<<endl;

    cout<<"\nEscolha: ";
    cin>>opcao;

    switch(opcao){
        case 1:
            system("cls");
            buscaApartamentoPorBairro();
            system("cls");
            break;
        case 2:
            break;
        case 3:
            system("cls");
            buscaApartamentoApenasVenda();
            system("cls");
            break;
        case 4:
            system("cls");
            buscaApartamentoApenasAluguel();
            system("cls");
            break;
        case 5:
            system("cls");
            buscaApartamentoValorMinimo();
            system("cls");
            break;
        case 6:
            system("cls");
            buscaApartamentoValorMaximo();
            system("cls");
            break;
        case 7:
            system("cls");
            listarTodosOsApartamentos();
            system("cls");
            break;
        case 8:
            system("cls");
            break;
        default:
            system("cls");
            cout<<"Opção Inválida."<<endl;
            system("pause");
            system("cls");
    }
}
void Interface::menuCosultaTerreno()
{
    int opcao;

    cout<<"-------------MENU DE CONSULTA DE TERRENO-------------\n"<<endl;
    cout<<"\t1-Buscar por Bairro"<<endl;
    cout<<"\t2-Buscar por Título"<<endl;
    cout<<"\t3-Apenas Venda"<<endl;
    cout<<"\t4-Apenas Aluguel"<<endl;
    cout<<"\t5-Valor Mínimo"<<endl;
    cout<<"\t6-Valor Máximo"<<endl;
    cout<<"\t7-Listar todos"<<endl;
    cout<<"\t8-Voltar"<<endl;

    cout<<"\nEscolha: ";
    cin>>opcao;

    switch(opcao){
        case 1:
            system("cls");
            buscaTerrenoPorBairro();
            system("cls");
            break;
        case 2:
            break;
        case 3:
            system("cls");
            buscaTerrenoApenasVenda();
            system("cls");
            break;
        case 4:
            system("cls");
            buscaTerrenoApenasAluguel();
            system("cls");
            break;
        case 5:
            system("cls");
            buscaTerrenoValorMinimo();
            system("cls");
            break;
        case 6:
            system("cls");
            buscaTerrenoValorMaximo();
            system("cls");
            break;
        case 7:
            system("cls");
            listarTodosOsTerreno();
            system("cls");
            break;
        case 8:
            system("cls");
            break;
        default:
            system("cls");
            cout<<"Opção Inválida."<<endl;
            system("pause");
            system("cls");
    }
}
//--------------- EDITAR ---------------
void Interface::menuDeEditar()
{
    while(1){
        int opcao;
        cout<<"-------------MENU DE EDIÇÃO-------------\n"<<endl;
        cout<<"\t1-Editar casa"<<endl;
        cout<<"\t2-Editar Apartamento"<<endl;
        cout<<"\t3-Editar Terreno"<<endl;
        cout<<"\t4-Voltar"<<endl;

        cout<<"\nEscolha: ";
        cin>>opcao;

        switch(opcao){
            case 1:
                system("cls");
                editarCasa();
                system("cls");
                break;
            case 2:
                system("cls");
                editarApartamento();
                system("cls");
                break;
            case 3:
                system("cls");
                editarTerreno();
                system("cls");
                break;
            case 4:
                system("cls");
                break;
            default:
                system("cls");
                cout<<"Opção Inválida."<<endl;
                system("pause");
                system("cls");
        }
        if(opcao == 4){
            break;
        }
    }
}
void Interface::menuDeletar()
{
    int opcao;
    cout<<"-------------MENU DE DELETE-------------\n"<<endl;
        cout<<"\t1-Casas"<<endl;
        cout<<"\t2-Apartamentos"<<endl;
        cout<<"\t3-Terrenos"<<endl;
        cout<<"\t4-Voltar"<<endl;

        cout<<"\nEscolha: ";
        cin>>opcao;

        switch(opcao){
            case 1:
                deletarCasa();
                system("cls");
                break;
            case 2:
                deletarApartamento();
                system("cls");
                break;
            case 3:
                deletarTerreno();
                system("cls");
                break;
            case 4:
                system("cls");
                menuPrincipal();
                break;
            default:
                system("cls");
                cout<<"Opção Inválida."<<endl;
                system("pause");
                system("cls");
        }
}

