// incluindo as bibliotecas necessárias
#include<iostream>
#include<cstdlib>
#include<string>
#include<cctype>

using namespace std;

int main(){
    // declarando as variáveis
    string nome, rua, bairro, cidade;
    char confirmacao_dados;
    int idade, numero_casa, cep;
    
    do{
        // Pedindo informações ao usuário
     cout << "Informe os dados pedidos abaixo: " << endl;
        cout << "Qual e o seu nome? ";
        getline(cin, nome);
        cout << "Informe a sua idade: ";
        cin >> idade;
        cin.ignore(); // Limpa o buffer de entrada
        cout << nome << ", por favor, insira as informacoes a seguir" << endl;
        cout << "Cidade: ";
        getline(cin, cidade);
        cout << "CEP: ";
        cin >> cep;
        cin.ignore(); // Limpa o buffer de entrada
        cout << "Bairro: ";
        getline(cin, bairro);
        cout << "Rua: ";
        getline(cin, rua);
        cout << "Numero da residencia: ";
        cin >> numero_casa;
        cin.ignore(); // Limpa o buffer de entrada
        cout << endl;

        // Exibindo as informações de entrada do usuário
    cout << "Exibindo as suas informacoes: " << endl;
    cout << " Idade: " << idade  << " anos" << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "CEP: " << cep << endl;
    cout << "Bairro: " << bairro << endl;
    cout << "Rua: " <<  rua << endl;
    cout << "Numero da residencia: " << numero_casa << endl;
    cout << endl;
    cout << nome << " voce confirma os seus dados? Digite (S) para sim e (N) para nao: ";
    cin >> confirmacao_dados;
    cin.ignore();
    confirmacao_dados = toupper(confirmacao_dados);
    cout << endl;
    
    // Verificação por parte do usuário sobre os dados informados
    if(confirmacao_dados == 'S')
    {
        cout << "Dados cadastrados com sucesso!" << endl << endl;
        break;
    }

    else if ( confirmacao_dados == 'N')
    {
        cout <<"Por favor, corrija as informacoes!" << endl << endl;
    }
    
    else
    {
        cout << "A opcao digitada e invalida" << endl;
    }

    }
    // Loop a ser iterado até o usuário confirmar os dados
    while( confirmacao_dados != 'S');
}
