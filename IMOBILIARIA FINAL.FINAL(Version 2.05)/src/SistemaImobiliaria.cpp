#include "SistemaImobiliaria.h"
//-------------------------  CONSTRUTORES  -------------------------
SistemaImobiliaria::SistemaImobiliaria()
{
    //ctor
}
//-----------------------------  GETS  -------------------------------
std::vector<Imovel> SistemaImobiliaria::getTodosOsImoveis(){return todosOsImoveis;}

std::vector<Casa> SistemaImobiliaria::getTodasAsCasas(){return todasAsCasas;}

std::vector<Apartamento> SistemaImobiliaria::getTodosOsApartamentos(){return todosOsApartamentos;}

std::vector<Terreno> SistemaImobiliaria::getTodosOsTerrenos(){return todosOsTerrenos;}

//-----------------------------  M�TODOS  -------------------------------
void SistemaImobiliaria::cadastraImovel(Imovel *imovel){todosOsImoveis.push_back(*imovel);}

void SistemaImobiliaria::cadastraCasa(Casa *casa){todasAsCasas.push_back(*casa);}

void SistemaImobiliaria::cadastraApartamento(Apartamento *apartamento){todosOsApartamentos.push_back(*apartamento);}

void SistemaImobiliaria::cadastraTerreno(Terreno *terreno){todosOsTerrenos.push_back(*terreno);}

void SistemaImobiliaria::mostrarTodasAsCasas()
{
    std::cout<<"--------------------Casa(s)--------------------"<<std::endl;
    for(int i=0; i< getTodasAsCasas().size() ; i++){
        std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
    }
}
void SistemaImobiliaria::mostrarTodosOsApartamentos()
{
    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsApartamentos().size() ; i++){
        std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
    }
}
void SistemaImobiliaria::mostrarTodosOsTerrenos()
{
    std::cout<<"--------------------Terreno(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsTerrenos().size() ; i++){
        std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
    }
}
void SistemaImobiliaria::buscaVenda()
{
    std::cout<<"-------------MENU DE BUSCA POR VENDA-------------\n"<<std::endl;
    std::cout<<"--------------------Casa(s)--------------------"<<std::endl;
    for(int i=0; i< getTodasAsCasas().size() ; i++){

        if(todasAsCasas[i].getTipoOferta() == "Venda" || todasAsCasas[i].getTipoOferta() == "VENDA" || todasAsCasas[i].getTipoOferta() == "venda"){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }
    }
    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsApartamentos().size() ; i++){

        if(todosOsApartamentos[i].getTipoOferta() == "Venda" || todosOsApartamentos[i].getTipoOferta() == "VENDA" || todosOsApartamentos[i].getTipoOferta() == "venda"){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }
    }
    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsTerrenos().size() ; i++){

        if(todosOsTerrenos[i].getTipoOferta() == "Venda" || todosOsTerrenos[i].getTipoOferta() == "VENDA" || todosOsTerrenos[i].getTipoOferta() == "venda"){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaAluguel()
{
    std::cout<<"-------------MENU DE BUSCA POR VENDA-------------\n"<<std::endl;

    std::cout<<"--------------------Casa(s)--------------------"<<std::endl;
    for(int i=0; i< getTodasAsCasas().size() ; i++){

        if(todasAsCasas[i].getTipoOferta() == "Aluguel" || todasAsCasas[i].getTipoOferta() == "ALUGUEL" || todasAsCasas[i].getTipoOferta() == "aluguel"){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }
    }
    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsApartamentos().size() ; i++){

        if(todosOsApartamentos[i].getTipoOferta() == "Aluguel" || todosOsApartamentos[i].getTipoOferta() == "ALUGUEL" || todosOsApartamentos[i].getTipoOferta() == "aluguel"){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }
    }
    std::cout<<"--------------------Terreno(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsTerrenos().size() ; i++){

        if(todosOsTerrenos[i].getTipoOferta() == "Aluguel" || todosOsTerrenos[i].getTipoOferta() == "ALUGUEL" || todosOsTerrenos[i].getTipoOferta() == "aluguel"){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::lerArquivo()
{
    // StringLida = String recebida pelo getLine no arquivo
    // O tipo se refere ao tipo de im�vel
    std::string stringLida[12], tipo;

    arquivo.open("teste.txt", std::ios::in);
    if(arquivo.is_open()){
        // N�mero de itens espec�ficos + Endereco em cada tipo de Im�vel
        const int NUM_ITENS_EM_CASA = 11;
        const int NUM_ITENS_EM_APARTAMENTO = 12;
        const int NUM_ITENS_EM_TERRENO = 8;

        while(1){
            getline(arquivo, tipo);

            //A sequencia adotada na lida das string � a dos itens em ordem do construtor
            if(tipo == "Casa"){
            //cout<<tipo;
                for(int i=0; i<NUM_ITENS_EM_CASA; i++){
                    getline(arquivo, stringLida[i]);
                    //cout<<stringLida[i];
                }
                // Adicionando ao vetor
                Endereco *enderecoArquivo = new Endereco(stringLida[0], stringLida[1], stringLida[2], stringLida[3], stringLida[4]);
                Casa *casaArquivo = new Casa(stringLida[5], stringLida[6], stringLida[7], stringLida[8], stringLida[9], stringLida[10], *enderecoArquivo);
                todasAsCasas.push_back(*casaArquivo);

            }else if(tipo == "Apartamento") {
            //cout<<tipo;
                for(int i=0; i<NUM_ITENS_EM_APARTAMENTO; i++)
                    getline(arquivo, stringLida[i]);

                // Adicionando ao vetor
                Endereco *enderecoArquivo = new Endereco(stringLida[0], stringLida[1], stringLida[2], stringLida[3], stringLida[4]);
                Apartamento *apartamentoArquivo = new Apartamento(stringLida[5], stringLida[6], stringLida[7], stringLida[8], stringLida[9], stringLida[10], stringLida[11], *enderecoArquivo);
                todosOsApartamentos.push_back(*apartamentoArquivo);

            }else if(tipo == "Terreno"){
            //cout<<tipo;
                for(int i=0; i<NUM_ITENS_EM_TERRENO; i++){
                    getline(arquivo, stringLida[i]);
                }
                // Adicionando ao vetor
                Endereco *enderecoArquivo = new Endereco(stringLida[0], stringLida[1], stringLida[2], stringLida[3], stringLida[4]);
                Terreno *terrenoArquivo = new Terreno(stringLida[5], stringLida[6], stringLida[7], *enderecoArquivo);
                todosOsTerrenos.push_back(*terrenoArquivo);
            }else
                break;
        } // Fim do while

    } // if(arquivo.is_open()
    else
        std::cout<<"Erro ao abrir o arquivo"<<std::endl;
    arquivo.close();
}
void SistemaImobiliaria::salvarNoArquivo()
{
    arquivo.open("teste.txt", std::ios::out);
    // salvando nos arquivos
    //cout << todasAsCasas[0].enviarParaArquivo();
    for(int i=0; i< todasAsCasas.size(); i++){
        arquivo<< "Casa\n" + todasAsCasas[i].enviarParaArquivo();
    }

    for(int i=0; i< todosOsApartamentos.size(); i++){
        arquivo<< "Apartamento\n" + todosOsApartamentos[i].enviarParaArquivo();
    }

    for(int i=0; i< todosOsTerrenos.size(); i++){
        arquivo<< "Terreno\n"<< todosOsTerrenos[i].enviarParaArquivo();
    }

     arquivo.close(); // Fechando o arquivo*/
    std::cout<<"\tSalvo com sucesso"<<std::endl;
}

//-------------------------------------------------------- INTERFACE --------------------------------------------------------
void SistemaImobiliaria::mostrarTodos()
{
    std::cout<<"\t---MOSTRANDO TODOS OS IM�VEIS---"<<std::endl;
    // ------------- Printando os dados -----------
    std::cout<<"--------------------Casa--------------------"<<std::endl;
    for(int i=0; i<getTodasAsCasas().size() ; i++){
        std::cout<< "\n" << todasAsCasas[i].getDados()<< std::endl;
    }

    std::cout<<"--------------------Apartamento--------------------"<<std::endl;
    for(int i=0; i<getTodosOsApartamentos().size(); i++){
        std::cout<< "\n" << todosOsApartamentos[i].getDados()<< std::endl;
    }

    std::cout<<"--------------------Terreno--------------------"<<std::endl;
    for(int i=0; i<getTodosOsTerrenos().size(); i++){
        std::cout<< "\n" << todosOsTerrenos[i].getDados()<< std::endl;
    }
}
//-----------------------------  CADASTRO  -------------------------------
void SistemaImobiliaria::cadastrarCasa()
{
    std::cout<<"-------------MENU DE CADASTRO DE CASA-------------\n"<<std::endl;
    Endereco endereco;
    Casa casa;
    std::string x;

    std::cout<<"Informe o nome da rua: ";
    std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setNomeDaRua(x);

    std::cout<<"Informe o Bairro do Im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setBairro(x);

    std::cout<<"Informe o CEP: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setCEP(x);

    std::cout<<"Informe a cidade do im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setCidade(x);

    std::cout<<"Informe o n�mero do im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setNumeroImovel(x);

    //std::cout<<"\n"<<endereco.getDados()<<std::endl;
    casa.setEndereco(endereco);

    std::cout<<"Informe o n�mero de pavimentos do im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    casa.setNumPavimentos(x);

    std::cout<<"Informe o n�mero de quartos do im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    casa.setNumQuartos(x);

    std::cout<<"Informe a �rea do terreno onde se localiza o im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    casa.setAreaDoTerreno(x);

    std::cout<<"Informe a �rea constru�da do im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    casa.setAreaConstruida(x);

    std::cout<<"Informe se � para Venda ou para Aluguel: ";
    //std::cin.ignore();
    std::getline(std::cin, x);
    casa.setTipoOferta(x);

    std::cout<<"Informe o pre�o deste im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    casa.setValor(x);


    //std::cout<<casa.getDescricao()<<std::endl;
    cadastraCasa(&casa);
    system("pause");
}

void SistemaImobiliaria::cadastrarApartamento()
{
    std::cout<<"-------------MENU DE CADASTRO DE APARTAMENTO-------------\n"<<std::endl;
    Endereco endereco;
    Apartamento apartamento;
    std::string x;

    std::cout<<"Informe o nome da rua: ";
    std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setNomeDaRua(x);

    std::cout<<"Informe o Bairro do Im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setBairro(x);

    std::cout<<"Informe o CEP: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setCEP(x);

    std::cout<<"Informe a cidade do im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setCidade(x);

    std::cout<<"Informe o n�mero do im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setNumeroImovel(x);

    //std::cout<<"\n"<<endereco.getDados()<<std::endl;
    apartamento.setEndereco(endereco);

    std::cout<<"Informe a posi��o que est� localizada o im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    apartamento.setPosicao(x);

    std::cout<<"Informe o n�mero de quartos do im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    apartamento.setNumQuartos(x);

    std::cout<<"Informe o valor do condom�nio no qual o im�vel est� inserido: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    apartamento.setValorCondominio(x);

    std::cout<<"Informe quantas vagas na garagem este im�vel possui: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    apartamento.setVagasGaragem(x);

    std::cout<<"Informe o tamanho do im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    apartamento.setArea(x);

    std::cout<<"Informe se � para Venda ou para Aluguel: ";
    //std::cin.ignore();
    std::getline(std::cin, x);
    apartamento.setTipoOferta(x);

    std::cout<<"Informe o pre�o deste im�vel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    apartamento.setValor(x);


    //std::cout<<casa.getDescricao()<<std::endl;
    cadastraApartamento(&apartamento);
    system("pause");
}

void SistemaImobiliaria::cadastrarTerreno()
{
    std::cout<<"-------------MENU DE CADASTRO DE TERRENO-------------\n"<<std::endl;
    Endereco endereco;
    Terreno terreno;
    std::string x;

    std::cout<<"Informe o nome da rua: ";
    std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setNomeDaRua(x);

    std::cout<<"Informe o Bairro do Terreno: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setBairro(x);

    std::cout<<"Informe o CEP: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setCEP(x);

    std::cout<<"Informe a cidade do Terreno: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setCidade(x);

    std::cout<<"Informe o n�mero do Terreno: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    endereco.setNumeroImovel(x);

    //std::cout<<"\n"<<endereco.getDados()<<std::endl;
    terreno.setEndereco(endereco);

    std::cout<<"Informe a �rea do terreno: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    terreno.setArea(x);

    std::cout<<"Informe se � para Venda ou Aluguel: ";
    //std::cin.ignore();
    std::getline (std::cin, x);
    terreno.setTipoOferta(x);

    std::cout<<"Informe o pre�o do terreno: ";
    //std::cin.ignore();
    std::getline(std::cin, x);
    terreno.setValor(x);

    //std::cout<<casa.getDescricao()<<std::endl;
    cadastraTerreno(&terreno);
    system("pause");
}
//-----------------------------  BUSCA  -------------------------------
void SistemaImobiliaria::buscaValorMinimo()
{
    double valor, preco;

    std::cout<<"-------------MENU DE BUSCA POR VALOR MIN�MO-------------\n"<<std::endl;
    std::cout<<"Informe o valor limitante para a busca dos im�veis: ";
    std::cin>>valor;

    std::cout<<"\n\nTodos os im�veis com essa caract�stica: \n"<<std::endl;

    std::cout<<"--------------------Casa(s)--------------------"<<std::endl;
    for(int i=0; i< getTodasAsCasas().size() ; i++){

        std::istringstream iss(todasAsCasas[i].getValor());
        iss >> preco;

        if(preco >= valor){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }
    }

    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsApartamentos().size() ; i++){

        std::istringstream iss(todosOsApartamentos[i].getValor());
        iss >> preco;

        if(preco >= valor){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }
    }

    std::cout<<"--------------------Terreno(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsTerrenos().size() ; i++){

        std::istringstream iss(todosOsTerrenos[i].getValor());
        iss >> preco;

        if(preco >= valor){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}

void SistemaImobiliaria::buscaValorMaximo()
{
    double valor;
    double preco;

    std::cout<<"-------------MENU DE BUSCA POR VALOR MIN�MO-------------\n"<<std::endl;
    std::cout<<"Informe o valor limitante para a busca dos im�veis: ";
    std::cin>>valor;

    std::cout<<"\n\nTodos os im�veis com essa caract�stica: \n"<<std::endl;

    std::cout<<"--------------------Casa(s)--------------------"<<std::endl;
    for(int i=0; i< getTodasAsCasas().size() ; i++){

        std::istringstream iss(todasAsCasas[i].getValor());
        iss >> preco;

        if(preco <= valor){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }
    }

    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsApartamentos().size() ; i++){

        std::istringstream iss(todosOsApartamentos[i].getValor());
        iss >> preco;

        if(preco <= valor){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }
    }

    std::cout<<"--------------------Terreno(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsTerrenos().size() ; i++){

        std::istringstream iss(todosOsTerrenos[i].getValor());
        iss >> preco;

        if(preco <= valor){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
//------------------  BUSCA/CASA  ------------------
void SistemaImobiliaria::buscaCasaPorBairro()
{
    std::cout<<"-------------MENU DE BUSCA CASA POR BAIRRO-------------\n"<<std::endl;
    std::string bairro;

    std::cout<<"Informe o bairro que esteja procurando casas: ";
    std::cin.ignore();
    std::getline(std::cin, bairro);

    std::cout<<"--------------------Casa(s)--------------------"<<std::endl;
    for(int i=0; i< getTodasAsCasas().size() ; i++){

        if(bairro == todasAsCasas[i].getEndereco().getBairro()){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaCasaApenasVenda()
{
    std::cout<<"-------------MENU DE BUSCA CASA APENAS POR VENDA-------------\n"<<std::endl;
    std::string bairro;

    std::cout<<"--------------------Casa(s)--------------------"<<std::endl;
    for(int i=0; i< getTodasAsCasas().size() ; i++){

        if(todasAsCasas[i].getTipoOferta() == "Venda" || todasAsCasas[i].getTipoOferta() == "VENDA" || todasAsCasas[i].getTipoOferta() == "venda"){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaCasaApenasAluguel()
{
    std::cout<<"-------------MENU DE BUSCA CASA APENAS POR ALUGUEL-------------\n"<<std::endl;
    std::string bairro;

    std::cout<<"--------------------Casa(s)--------------------"<<std::endl;
    for(int i=0; i< getTodasAsCasas().size() ; i++){

        if(todasAsCasas[i].getTipoOferta() == "Aluguel" || todasAsCasas[i].getTipoOferta() == "ALUGUEL" || todasAsCasas[i].getTipoOferta() == "aluguel"){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaCasaValorMinimo()
{
    double preco, valor;
    std::cout<<"-------------MENU DE BUSCA CASA POR VALOR M�NIMO-------------\n"<<std::endl;

    std::cout<<"Informe o valor limitante para a busca dos im�veis: ";
    std::cin>>valor;

    for(int i=0; i< getTodasAsCasas().size() ; i++){

        std::istringstream iss(todasAsCasas[i].getValor());
        iss >> preco;

        if(preco >= valor){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaCasaValorMaximo()
{
    double preco, valor;
    std::cout<<"-------------MENU DE BUSCA CASA POR VALOR M�XIMO-------------\n"<<std::endl;

    std::cout<<"Informe o valor limitante para a busca dos im�veis: ";
    std::cin>>valor;

    for(int i=0; i< getTodasAsCasas().size() ; i++){

        std::istringstream iss(todasAsCasas[i].getValor());
        iss >> preco;

        if(preco <= valor){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::listarTodasAsCasas()
{
    std::cout<<"-------------LISTAR TODAS AS CASAS-------------\n"<<std::endl;
    for(int i=0; i<getTodasAsCasas().size() ; i++){
        std::cout<< "\n" << todasAsCasas[i].getDados()<< std::endl;
    }
    system("pause");
}
//------------------  BUSCA/APARTAMENTO  ------------------
void SistemaImobiliaria::buscaApartamentoPorBairro()
{
    std::cout<<"-------------MENU DE BUSCA APARTAMENTO POR BAIRRO-------------\n"<<std::endl;
    std::string bairro;

    std::cout<<"Informe o bairro que esteja procurando apartamentos: ";
    std::cin.ignore();
    std::getline(std::cin, bairro);

    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsApartamentos().size() ; i++){

        if(bairro == todosOsApartamentos[i].getEndereco().getBairro()){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaApartamentoApenasVenda()
{
    std::cout<<"-------------MENU DE BUSCA APARTAMENTO APENAS POR VENDA-------------\n"<<std::endl;
    std::string bairro;

    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsApartamentos().size() ; i++){

        if(todosOsApartamentos[i].getTipoOferta() == "Venda" || todosOsApartamentos[i].getTipoOferta() == "VENDA" || todosOsApartamentos[i].getTipoOferta() == "venda"){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaApartamentoApenasAluguel()
{
    std::cout<<"-------------MENU DE BUSCA APARTAMENTO APENAS POR ALUGUEL-------------\n"<<std::endl;
    std::string bairro;

    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsApartamentos().size() ; i++){

        if(todosOsApartamentos[i].getTipoOferta() == "Aluguel" || todosOsApartamentos[i].getTipoOferta() == "ALUGUEL" || todosOsApartamentos[i].getTipoOferta() == "aluguel"){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaApartamentoValorMinimo()
{
    double preco, valor;
    std::cout<<"-------------MENU DE BUSCA APARTAMENTO POR VALOR M�NIMO-------------\n"<<std::endl;

    std::cout<<"Informe o valor limitante para a busca dos im�veis: ";
    std::cin>>valor;

    for(int i=0; i< getTodosOsApartamentos().size() ; i++){

        std::istringstream iss(todosOsApartamentos[i].getValor());
        iss >> preco;

        if(preco >= valor){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaApartamentoValorMaximo()
{
    double preco, valor;
    std::cout<<"-------------MENU DE BUSCA APARTAMENTO POR VALOR M�XIMO-------------\n"<<std::endl;

    std::cout<<"Informe o valor limitante para a busca dos im�veis: ";
    std::cin>>valor;

    for(int i=0; i< getTodosOsApartamentos().size() ; i++){

        std::istringstream iss(todosOsApartamentos[i].getValor());
        iss >> preco;

        if(preco <= valor){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::listarTodosOsApartamentos()
{
    std::cout<<"-------------LISTAR TODOS OS APARTAMENTOS-------------\n"<<std::endl;
    for(int i=0; i<getTodosOsApartamentos().size() ; i++){
        std::cout<< "\n" << todosOsApartamentos[i].getDados()<< std::endl;
    }
    system("pause");
}
//------------------  BUSCA/TERRENO  ------------------
void SistemaImobiliaria::buscaTerrenoPorBairro()
{
    std::cout<<"-------------MENU DE BUSCA TERRENO POR BAIRRO-------------\n"<<std::endl;
    std::string bairro;

    std::cout<<"Informe o bairro que esteja procurando terrenos: ";
    std::cin.ignore();
    std::getline(std::cin, bairro);

    std::cout<<"--------------------Terrenos(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsTerrenos().size() ; i++){

        if(bairro == todosOsTerrenos[i].getEndereco().getBairro()){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaTerrenoApenasVenda()
{
    std::cout<<"-------------MENU DE BUSCA TERRENO APENAS POR VENDA-------------\n"<<std::endl;
    std::string bairro;

    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsTerrenos().size() ; i++){

        if(todosOsTerrenos[i].getTipoOferta() == "Venda" || todosOsTerrenos[i].getTipoOferta() == "VENDA" || todosOsTerrenos[i].getTipoOferta() == "venda"){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaTerrenoApenasAluguel()
{
    std::cout<<"-------------MENU DE BUSCA TERRENO APENAS POR ALUGUEL-------------\n"<<std::endl;
    std::string bairro;

    std::cout<<"--------------------Apartamento(s)--------------------"<<std::endl;
    for(int i=0; i< getTodosOsTerrenos().size() ; i++){

        if(todosOsTerrenos[i].getTipoOferta() == "Aluguel" || todosOsTerrenos[i].getTipoOferta() == "ALUGUEL" || todosOsTerrenos[i].getTipoOferta() == "aluguel"){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaTerrenoValorMinimo()
{
    double preco, valor;
    std::cout<<"-------------MENU DE BUSCA TERRENO POR VALOR M�NIMO-------------\n"<<std::endl;

    std::cout<<"Informe o valor limitante para a busca dos im�veis: ";
    std::cin>>valor;

    for(int i=0; i< getTodosOsTerrenos().size() ; i++){

        std::istringstream iss(todosOsTerrenos[i].getValor());
        iss >> preco;

        if(preco >= valor){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::buscaTerrenoValorMaximo()
{
    double preco, valor;
    std::cout<<"-------------MENU DE BUSCA TERRENO POR VALOR M�XIMO-------------\n"<<std::endl;

    std::cout<<"Informe o valor limitante para a busca dos im�veis: ";
    std::cin>>valor;

    for(int i=0; i< todosOsTerrenos.size(); i++){

        std::istringstream iss(todosOsTerrenos[i].getValor());
        iss >> preco;

        if(preco <= valor){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }
    }
    system("pause");
}
void SistemaImobiliaria::listarTodosOsTerreno()
{
    std::cout<<"-------------LISTAR TODOS OS TERRENOS-------------\n"<<std::endl;
    for(int i=0; i<getTodosOsTerrenos().size() ; i++){
        std::cout<< "\n" << todosOsTerrenos[i].getDados()<< std::endl;
    }
    system("pause");
}
//-----------------------------  EDITAR  -------------------------------
void SistemaImobiliaria::editarCasa()
{
    //op��o � usada para guardar o �ndice da casa, enquanto o op��o1 � apenas para saber quando op��o o usu�rio esta escolhendo.
    int opcao;
    int opcao1;
    std::string mudanca;
    Endereco endereco;

    while(1){
        std::cout<<"-------------EDI��O DE CASA-------------\n"<<std::endl;

        for(int i=0; i<getTodasAsCasas().size() ; i++){
            std::cout<< "\n"<< i+1 << "-" << todasAsCasas[i].getDados()<< std::endl;
        }

        std::cout<<"\nEscolha uma casa para edi��o de uma de suas caracter�stcias."<<std::endl;
        std::cout<<"Escolha(voltar=0): ";
        std::cin>>opcao;

        if(opcao == 0){
            break;

        }else if(opcao > getTodasAsCasas().size()){
            system("cls");
            std::cout<<"Op��o Inv�lida."<<std::endl;
            system("pause");
            system("cls");

        }else{
            while(1){
                system("cls");
                std::cout<<"Essa � a casa que voc� deseja modificar?\n."<<std::endl;
                std::cout<<"\n"<< opcao << "-" << todasAsCasas[opcao-1].getDados()<<std::endl;

                std::cout<<"\nEscolha(Sim=1/N�o=0): ";
                std::cin>>opcao1;


                if(opcao1 == 0){
                    system("cls");
                    break;

                }else if(opcao1>1){
                    system("cls");
                    std::cout<<"Op��o Inv�lida."<<std::endl;
                    system("pause");
                    system("cls");

                }else{
                    while(1){
                        system("cls");
                        int i=0;
                        std::cout<<"Qual caracter�stica voc� gostaria de mudar: \n"<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Rua: "<<todasAsCasas[opcao-1].getEndereco().getNomeDaRua()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"N�mero: "<<todasAsCasas[opcao-1].getEndereco().getNumeroImovel()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Bairro: "<<todasAsCasas[opcao-1].getEndereco().getBairro()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"CEP: "<<todasAsCasas[opcao-1].getEndereco().getCEP()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Cidade: "<<todasAsCasas[opcao-1].getEndereco().getCidade()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"N�mero de Pavimento(s): "<<todasAsCasas[opcao-1].getNumPavimentos()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"N�mero de Quarto(s): "<<todasAsCasas[opcao-1].getNumQuartos()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"�rea do terreno: "<<todasAsCasas[opcao-1].getAreaDoTerreno()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"�rea constru�da: "<<todasAsCasas[opcao-1].getAreaConstruida()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Pre�o: "<<todasAsCasas[opcao-1].getValor()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Tipo da Oferta: "<<todasAsCasas[opcao-1].getTipoOferta()<<std::endl;

                        endereco.setEndereco(todasAsCasas[opcao - 1].getEndereco());
                        std::cout<<"\nEscolha(Sair=0): ";
                        std::cin>>i;

                        switch(i){
                            case 0:
                                break;
                            case 1:
                                std::cout<<"Informe a nova rua desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setNomeDaRua(mudanca);
                                todasAsCasas[opcao-1].setEndereco(endereco);
                                break;
                            case 2:
                                std::cout<<"Informe o novo n�mero desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setNumeroImovel(mudanca);
                                todasAsCasas[opcao-1].setEndereco(endereco);
                                break;
                            case 3:
                                std::cout<<"Informe o novo bairro desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setBairro(mudanca);
                                todasAsCasas[opcao-1].setEndereco(endereco);
                                break;
                            case 4:
                                std::cout<<"Informe o novo CEP desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setCEP(mudanca);
                                todasAsCasas[opcao-1].setEndereco(endereco);
                                break;
                            case 5:
                                std::cout<<"Informe a nova cidade desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setCidade(mudanca);
                                todasAsCasas[opcao-1].setEndereco(endereco);
                                break;
                            case 6:
                                std::cout<<"Informe o novo n�mero de pavimento(s) desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todasAsCasas[opcao-1].setNumPavimentos(mudanca);
                                break;
                            case 7:
                                std::cout<<"Informe o novo n�mero de quarto(s) desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todasAsCasas[opcao-1].setNumQuartos(mudanca);
                                break;
                            case 8:
                                std::cout<<"Informe a nova �rea do terreno desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todasAsCasas[opcao-1].setAreaDoTerreno(mudanca);
                                break;
                            case 9:
                                std::cout<<"Informe a nova �rea constru�da desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todasAsCasas[opcao-1].setAreaConstruida(mudanca);
                                break;
                            case 10:
                                std::cout<<"Informe o novo pre�o desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todasAsCasas[opcao-1].setValor(mudanca);
                                break;
                            case 11:
                                std::cout<<"Informe o novo tipo de oferta desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todasAsCasas[opcao-1].setTipoOferta(mudanca);
                                break;
                            default:
                                system("cls");
                                std::cout<<"Op��o inval�da."<<std::endl;
                                system("pause");
                                system("cls");
                        }
                        if(i == 0){
                            break;
                        }
                    }
                }
            }
        }
    }
}
void SistemaImobiliaria::editarApartamento()
{
    //op��o � usada para guardar o �ndice da casa, enquanto o op��o1 � apenas para saber quando op��o o usu�rio esta escolhendo.
    int opcao;
    int opcao1;
    std::string mudanca;
    Endereco endereco;

    while(1){
        std::cout<<"-------------EDI��O DE APARTAMENTO-------------\n"<<std::endl;

        for(int i=0; i<getTodosOsApartamentos().size() ; i++){
            std::cout<< "\n"<< i+1 << "-" << todosOsApartamentos[i].getDados()<< std::endl;
        }

        std::cout<<"\nEscolha um apartamento para edi��o de uma de suas caracter�stcias."<<std::endl;
        std::cout<<"Escolha(voltar=0): ";
        std::cin>>opcao;

        if(opcao == 0){
            break;

        }else if(opcao > getTodosOsApartamentos().size()){
            system("cls");
            std::cout<<"Op��o Inv�lida."<<std::endl;
            system("pause");
            system("cls");

        }else{
            while(1){
                system("cls");
                std::cout<<"Essa � o apartamento que voc� deseja modificar?\n."<<std::endl;
                std::cout<<"\n"<< opcao << "-" << todosOsApartamentos[opcao-1].getDados()<<std::endl;

                std::cout<<"\nEscolha(Sim=1/N�o=0): ";
                std::cin>>opcao1;


                if(opcao1 == 0){
                    system("cls");
                    break;

                }else if(opcao1>1){
                    system("cls");
                    std::cout<<"Op��o Inv�lida."<<std::endl;
                    system("pause");
                    system("cls");

                }else{
                    while(1){
                        system("cls");
                        int i=0;
                        std::cout<<"Qual caracter�stica voc� gostaria de mudar: \n"<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Rua: "<<todosOsApartamentos[opcao-1].getEndereco().getNomeDaRua()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"N�mero: "<<todosOsApartamentos[opcao-1].getEndereco().getNumeroImovel()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Bairro: "<<todosOsApartamentos[opcao-1].getEndereco().getBairro()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"CEP: "<<todosOsApartamentos[opcao-1].getEndereco().getCEP()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Cidade: "<<todosOsApartamentos[opcao-1].getEndereco().getCidade()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Posi��o: "<<todosOsApartamentos[opcao-1].getPosicao()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"N�mero de Quarto(s): "<<todosOsApartamentos[opcao-1].getNumQuartos()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Valor do condom�nio: "<<todosOsApartamentos[opcao-1].getValorCondominio()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Vagas da garagem: "<<todosOsApartamentos[opcao-1].getVagasGaragem()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"�rea: "<<todosOsApartamentos[opcao-1].getArea()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Tipo da Oferta: "<<todosOsApartamentos[opcao-1].getTipoOferta()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Pre�o: "<<todosOsApartamentos[opcao-1].getValor()<<std::endl;

                        endereco.setEndereco(todosOsApartamentos[opcao - 1].getEndereco());
                        std::cout<<"\nEscolha(Sair=0): ";
                        std::cin>>i;

                        switch(i){
                            case 0:
                                break;
                            case 1:
                                std::cout<<"Informe a nova rua deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setNomeDaRua(mudanca);
                                todosOsApartamentos[opcao-1].setEndereco(endereco);
                                break;
                            case 2:
                                std::cout<<"Informe o novo n�mero deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setNumeroImovel(mudanca);
                                todosOsApartamentos[opcao-1].setEndereco(endereco);
                                break;
                            case 3:
                                std::cout<<"Informe o novo bairro deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setBairro(mudanca);
                                todosOsApartamentos[opcao-1].setEndereco(endereco);
                                break;
                            case 4:
                                std::cout<<"Informe o novo CEP deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setCEP(mudanca);
                                todosOsApartamentos[opcao-1].setEndereco(endereco);
                                break;
                            case 5:
                                std::cout<<"Informe a nova cidade deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setCidade(mudanca);
                                todosOsApartamentos[opcao-1].setEndereco(endereco);
                                break;
                            case 6:
                                std::cout<<"Informe a nova posi��o deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsApartamentos[opcao-1].setPosicao(mudanca);
                                break;
                            case 7:
                                std::cout<<"Informe o novo n�mero de quarto(s) deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsApartamentos[opcao-1].setNumQuartos(mudanca);
                                break;
                            case 8:
                                std::cout<<"Informe o novo valor do condom�nio deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsApartamentos[opcao-1].setValorCondominio(mudanca);
                                break;
                            case 9:
                                std::cout<<"Informe quantas vagas na garagem tem esse  apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsApartamentos[opcao-1].setVagasGaragem(mudanca);
                                break;
                            case 10:
                                std::cout<<"Informe a nova �rea deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsApartamentos[opcao-1].setArea(mudanca);
                                break;
                            case 11:
                                std::cout<<"Informe o novo tipo de oferta desta casa: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsApartamentos[opcao-1].setTipoOferta(mudanca);
                                break;
                            case 12:
                                std::cout<<"Informe o novo pre�o deste apartamento: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsApartamentos[opcao-1].setValor(mudanca);
                                break;
                            default:
                                system("cls");
                                std::cout<<"Op��o inval�da."<<std::endl;
                                system("pause");
                                system("cls");
                        }
                        if(i == 0){
                            break;
                        }
                    }
                }
            }
        }
    }
}
void SistemaImobiliaria::editarTerreno()
{
    //op��o � usada para guardar o �ndice da casa, enquanto o op��o1 � apenas para saber quando op��o o usu�rio esta escolhendo.
    int opcao;
    int opcao1;
    std::string mudanca;
    Endereco endereco;

    while(1){
        std::cout<<"-------------EDI��O DE TERRENO-------------\n"<<std::endl;

        for(int i=0; i<getTodosOsTerrenos().size() ; i++){
            std::cout<< "\n"<< i+1 << "-" << todosOsTerrenos[i].getDados()<< std::endl;
        }

        std::cout<<"\nEscolha um terreno para edi��o de uma de suas caracter�stcias."<<std::endl;
        std::cout<<"Escolha(voltar=0): ";
        std::cin>>opcao;

        if(opcao == 0){
            break;

        }else if(opcao > getTodosOsTerrenos().size()){
            system("cls");
            std::cout<<"Op��o Inv�lida."<<std::endl;
            system("pause");
            system("cls");

        }else{
            while(1){
                system("cls");
                std::cout<<"Essa � o apartamento que voc� deseja modificar?\n."<<std::endl;
                std::cout<<"\n"<< opcao << "-" << todosOsTerrenos[opcao-1].getDados()<<std::endl;

                std::cout<<"\nEscolha(Sim=1/N�o=0): ";
                std::cin>>opcao1;


                if(opcao1 == 0){
                    system("cls");
                    break;

                }else if(opcao1>1){
                    system("cls");
                    std::cout<<"Op��o Inv�lida."<<std::endl;
                    system("pause");
                    system("cls");

                }else{
                    while(1){
                        system("cls");
                        int i=0;
                        std::cout<<"Qual caracter�stica voc� gostaria de mudar: \n"<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Rua: "<<todosOsTerrenos[opcao-1].getEndereco().getNomeDaRua()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"N�mero: "<<todosOsTerrenos[opcao-1].getEndereco().getNumeroImovel()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Bairro: "<<todosOsTerrenos[opcao-1].getEndereco().getBairro()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"CEP: "<<todosOsTerrenos[opcao-1].getEndereco().getCEP()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Cidade: "<<todosOsTerrenos[opcao-1].getEndereco().getCidade()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"�rea do terreno: "<<todosOsTerrenos[opcao-1].getArea()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Tipo de oferta: "<<todosOsTerrenos[opcao-1].getTipoOferta()<<std::endl;
                        std::cout<<"\t"<<++i<<"-"<<"Pre�o: "<<todosOsTerrenos[opcao-1].getValor()<<std::endl;


                        endereco.setEndereco(todosOsTerrenos[opcao - 1].getEndereco());
                        std::cout<<"\nEscolha(Sair=0): ";
                        std::cin>>i;

                        switch(i){
                            case 0:
                                break;
                            case 1:
                                std::cout<<"Informe a nova rua deste terreno: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setNomeDaRua(mudanca);
                                todosOsTerrenos[opcao-1].setEndereco(endereco);
                                break;
                            case 2:
                                std::cout<<"Informe o novo n�mero deste terreno: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setNumeroImovel(mudanca);
                                todosOsTerrenos[opcao-1].setEndereco(endereco);
                                break;
                            case 3:
                                std::cout<<"Informe o novo bairro deste terreno: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setBairro(mudanca);
                                todosOsTerrenos[opcao-1].setEndereco(endereco);
                                break;
                            case 4:
                                std::cout<<"Informe o novo CEP deste terreno: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setCEP(mudanca);
                                todosOsTerrenos[opcao-1].setEndereco(endereco);
                                break;
                            case 5:
                                std::cout<<"Informe a nova cidade deste terreno: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                endereco.setCidade(mudanca);
                                todosOsTerrenos[opcao-1].setEndereco(endereco);
                                break;
                            case 6:
                                std::cout<<"Informe a nova �rea deste terreno: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsTerrenos[opcao-1].setArea(mudanca);
                                break;
                            case 7:
                                std::cout<<"Informe o novo pre�o deste terreno: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsTerrenos[opcao-1].setValor(mudanca);
                                break;
                            case 8:
                                std::cout<<"Informe o novo tipo de oferta deste terreno: ";
                                std::cin.ignore();
                                std::getline(std::cin, mudanca);
                                todosOsTerrenos[opcao-1].setTipoOferta(mudanca);
                                break;
                            default:
                                system("cls");
                                std::cout<<"Op��o inval�da."<<std::endl;
                                system("pause");
                                system("cls");
                        }
                        if(i == 0){
                            break;
                        }
                    }
                }
            }
        }
    }
}
//-----------------------------  DELETE  -------------------------------
void SistemaImobiliaria::deletarCasa()
{
    int opcao, escolha;

    while(1){
        system("cls");
        mostrarTodasAsCasas();

        std::cout<<"\nQual dessas casas voc� gostaria de deletar(voltar=0): ";
        std::cin>>opcao;

        if(opcao <= todasAsCasas.size() && opcao > 0){
            system("cls");

            std::cout<<"Essa � a casa que voc� gostaria de apagar: \n"<<std::endl;
            std::cout<<todasAsCasas[opcao-1].getDescricao()<<std::endl;

            std::cout<<"\nEscolha(SIM = 1|N�O = 0): ";
            std::cin>>escolha;

            if(escolha == 1){
                todasAsCasas.erase(todasAsCasas.begin()+(opcao-1));
                break;
            }else{
                break;
            }
        }else if(opcao == 0){
            break;
        }else{
            system("cls");
            std::cout<<"Op��o inval�da."<<std::endl;
            system("pause");
            system("cls");
        }
    }
}
void SistemaImobiliaria::deletarApartamento()
{
    int opcao, escolha;

    while(1){
        system("cls");
        mostrarTodosOsApartamentos();

        std::cout<<"\nQual desses apartamentos voc� gostaria de deletar(voltar=0): ";
        std::cin>>opcao;

        if(opcao <= todosOsApartamentos.size() && opcao > 0){
            system("cls");

            std::cout<<"Essa � o apartamento que voc� gostaria de apagar: \n"<<std::endl;
            std::cout<<todosOsApartamentos[opcao-1].getDados()<<std::endl;

            std::cout<<"\nEscolha(SIM = 1|N�O = 0): ";
            std::cin>>escolha;

            if(escolha == 1){
                todosOsApartamentos.erase(todosOsApartamentos.begin()+(opcao-1));
                break;
            }else{
                break;
            }
        }else if(opcao == 0){
            break;
        }else{
            system("cls");
            std::cout<<"Op��o inval�da."<<std::endl;
            system("pause");
            system("cls");
        }
    }
}
void SistemaImobiliaria::deletarTerreno()
{
    int opcao, escolha;

    while(1){
        system("cls");
        mostrarTodosOsTerrenos();

        std::cout<<"\nQual desses terrenos voc� gostaria de deletar(voltar=0): ";
        std::cin>>opcao;

        if(opcao <= todosOsTerrenos.size() && opcao > 0){
            system("cls");

            std::cout<<"Essa � o terreno que voc� gostaria de apagar: \n"<<std::endl;
            std::cout<<todosOsTerrenos[opcao-1].getDados()<<std::endl;

            std::cout<<"\nEscolha(SIM = 1|N�O = 0): ";
            std::cin>>escolha;

            if(escolha == 1){
                todosOsTerrenos.erase(todosOsTerrenos.begin()+(opcao-1));
                break;
            }else{
                break;
            }
        }else if(opcao == 0){
            break;
        }else{
            system("cls");
            std::cout<<"Op��o inval�da."<<std::endl;
            system("pause");
            system("cls");
        }
    }
}
