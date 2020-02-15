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

//-----------------------------  MÉTODOS  -------------------------------
void SistemaImobiliaria::cadastraImovel(Imovel *imovel){todosOsImoveis.push_back(*imovel);}

void SistemaImobiliaria::cadastraCasa(Casa *casa){todasAsCasas.push_back(*casa);}

void SistemaImobiliaria::lerArquivo()
{
    // StringLida = String recebida pelo getLine no arquivo
    // O tipo se refere ao tipo de imóvel
    std::string stringLida[12], tipo;

    arquivo.open("teste.txt", std::ios::in);
    if(arquivo.is_open()){
        // Número de itens específicos + Endereco em cada tipo de Imóvel
        const int NUM_ITENS_EM_CASA = 10;
        const int NUM_ITENS_EM_APARTAMENTO = 11;
        const int NUM_ITENS_EM_TERRENO = 7;

        while(1){
            getline(arquivo, tipo);

            //A sequencia adotada na lida das string é a dos itens em ordem do construtor
            if(tipo == "Casa"){
            //cout<<tipo;
                for(int i=0; i<NUM_ITENS_EM_CASA; i++){
                    getline(arquivo, stringLida[i]);
                    //cout<<stringLida[i];
                }
                // Adicionando ao vetor
                Endereco *enderecoArquivo = new Endereco(stringLida[0], stringLida[1], stringLida[2], stringLida[3], stringLida[4]);
                Casa *casaArquivo = new Casa(stringLida[5], stringLida[6], stringLida[7], stringLida[8], stringLida[9], *enderecoArquivo);
                todasAsCasas.push_back(*casaArquivo);

            }else if(tipo == "Apartamento") {
            //cout<<tipo;
                for(int i=0; i<NUM_ITENS_EM_APARTAMENTO; i++)
                    getline(arquivo, stringLida[i]);

                // Adicionando ao vetor
                Endereco *enderecoArquivo = new Endereco(stringLida[0], stringLida[1], stringLida[2], stringLida[3], stringLida[4]);
                Apartamento *apartamentoArquivo = new Apartamento(stringLida[5], stringLida[6], stringLida[7], stringLida[8], stringLida[9], stringLida[10], *enderecoArquivo);
                todosOsApartamentos.push_back(*apartamentoArquivo);

            }else if(tipo == "Terreno"){
            //cout<<tipo;
                for(int i=0; i<NUM_ITENS_EM_TERRENO; i++){
                    getline(arquivo, stringLida[i]);
                }
                // Adicionando ao vetor
                Endereco *enderecoArquivo = new Endereco(stringLida[0], stringLida[1], stringLida[2], stringLida[3], stringLida[4]);
                Terreno *terrenoArquivo = new Terreno(stringLida[5], stringLida[6], *enderecoArquivo);
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
        arquivo<< "Casa\n" + todasAsCasas[0].enviarParaArquivo();
    }

    for(int i=0; i< todosOsApartamentos.size(); i++){
        arquivo<< "Apartamento\n" + todosOsApartamentos[0].enviarParaArquivo();
    }

    for(int i=0; i< todosOsTerrenos.size(); i++){
        arquivo<< "Terreno\n"<< todosOsTerrenos[i].enviarParaArquivo();
    }

     arquivo.close(); // Fechando o arquivo*/
}

void SistemaImobiliaria::lerArquivo1()
{
    arquivo1.open("teste1.txt", std::ios::in);

    std::string stringLida[12], tipo;
    if(arquivo1.is_open()){
        // Número de itens específicos + Endereco em cada tipo de Imóvel
        const int NUM_ITENS_EM_CASA = 10;
        const int NUM_ITENS_EM_APARTAMENTO = 11;
        const int NUM_ITENS_EM_TERRENO = 7;

        while(1){
            getline(arquivo1, tipo);
            int flag = 0;
            //A sequencia adotada na lida das string é a dos itens em ordem do construtor
            if(tipo == "Casa"){
            //cout<<tipo;
                for(int i=0; i<NUM_ITENS_EM_CASA; i++){
                    getline(arquivo1, stringLida[i]);
                    //cout<<stringLida[i];
                }
                // Adicionando ao vetor
                Endereco *enderecoArquivo = new Endereco(stringLida[0], stringLida[1], stringLida[2], stringLida[3], stringLida[4]);
                Imovel *casaArquivo = new Casa(stringLida[5], stringLida[6], stringLida[7], stringLida[8], stringLida[9], *enderecoArquivo);

                todosOsImoveis.push_back(*casaArquivo);
                todosOsImoveis[flag].setTipoDeImovel(1);
                flag++;

            }else if(tipo == "Apartamento") {
            //cout<<tipo;
                for(int i=0; i<NUM_ITENS_EM_APARTAMENTO; i++)
                    getline(arquivo1, stringLida[i]);

                // Adicionando ao vetor
                Endereco *enderecoArquivo = new Endereco(stringLida[0], stringLida[1], stringLida[2], stringLida[3], stringLida[4]);
                Imovel *apartamentoArquivo = new Apartamento(stringLida[5], stringLida[6], stringLida[7], stringLida[8], stringLida[9], stringLida[10], *enderecoArquivo);

                todosOsImoveis.push_back(*apartamentoArquivo);
                todosOsImoveis[flag].setTipoDeImovel(2);
                flag++;

            }else if(tipo == "Terreno"){
            //cout<<tipo;
                for(int i=0; i<NUM_ITENS_EM_TERRENO; i++){
                    getline(arquivo1, stringLida[i]);
                }
                // Adicionando ao vetor
                Endereco *enderecoArquivo = new Endereco(stringLida[0], stringLida[1], stringLida[2], stringLida[3], stringLida[4]);
                Imovel *terrenoArquivo = new Terreno(stringLida[5], stringLida[6], *enderecoArquivo);

                todosOsImoveis.push_back(*terrenoArquivo);
                todosOsImoveis[flag].setTipoDeImovel(3);
                flag++;

            }else
                break;
        } // Fim do while

    } // if(arquivo.is_open()
    else
        std::cout<<"Erro ao abrir o arquivo"<<std::endl;
    arquivo1.close();

}
void SistemaImobiliaria::salvarNoArquivo1()
{

    arquivo1.open("teste1.txt", std::ios::out);

    for(int i=0; i< todosOsImoveis.size(); i++){
        if(todosOsImoveis[i].getTipoDeImovel() == 1){
            arquivo1<< "Casa\n" << todosOsImoveis[i].enviarParaArquivo();

        }else if(todosOsImoveis[i].getTipoDeImovel() == 2){
            arquivo1<< "Apartamento\n" << todosOsImoveis[i].enviarParaArquivo();

        }if(todosOsImoveis[i].getTipoDeImovel() == 3)
            arquivo1<< "Terreno\n" << todosOsImoveis[i].enviarParaArquivo();
    }

    arquivo1.close(); // Fechando o arquivo*/
}
