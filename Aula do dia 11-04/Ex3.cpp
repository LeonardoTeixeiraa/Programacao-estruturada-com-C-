#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
    char op;
    float num1, num2, soma, subtracao, mult, div;

    cout << "Escolha uma das Opcoes: " << endl;
    cout << "1 - para SOMAR" << endl;
    cout << "2 - para SUBTRAIR" << endl;
    cout << "3 - DIVIDIR" << endl;
    cout << "4 - MULTIPLICAR" << endl;
    cout << "5 - SAIR" << endl << endl;
    cout << "Informe a opcao desejada: ";
    cin >>  op;
    op = toupper(op);
    cout << endl << endl;
    
    switch(op){
        case '1':
            cout << "Digite o primeiro numero: ";
            cin >> num1;
            cout << endl;
            cout << "Digite o segundo numero: ";
            cin >> num2;
            cout << endl;
            soma =  num1 + num2;
            cout << "O resultado da soma e: " << fixed << setprecision(2) << soma << endl;
        break;

        case '2': 
            cout << "Digite o primeiro numero: ";
            cin >> num1;
            cout << endl << endl;
            cout << "Digite o segundo numero: ";
            cin >> num2;
            cout << endl;
            subtracao = num1 - num2;
            cout << "O resultado da subtracao e: " << fixed << setprecision(2) << subtracao  << endl;
        break;

        case '3': 
            cout << "Digite o primeiro numero: ";
            cin >> num1;
            cout << endl << endl;
            cout << "Digite o segundo numero: ";
            cin >> num2;
            cout << endl;
            div = num1 / num2;
            cout << "A divisao e: " << fixed << setprecision(2) << div  << endl;
        break;

        case '4':
            cout << "Digite o primeiro numero: ";
            cin >> num1;
            cout << endl << endl;
            cout << "Digite o segundo numero: ";
            cin >> num2;
            cout << endl;
            mult = num1 * num2;
            cout << "O resultado da multilicacao e: "  << fixed << setprecision(2) << mult << endl;
        break;

        case 'S': 
            if(op == 'S'){
            cout << "Fim do programa!" << endl;
        break;

        default: 
            cout << "opcao invalida!" << endl;
    }

}

}