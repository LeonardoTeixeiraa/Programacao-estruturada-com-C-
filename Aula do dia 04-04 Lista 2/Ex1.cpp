// 1.	Faça um programa que deve perguntar ao usuário se ele deseja somar, subtrair, dividir, multiplicar ou sair do programa. 
// •	Caso ele queira somar (+), deverá informar dois números e o computador informará o resultado da soma. 
// •	Caso ele queira subtrair (-), deverá informar dois números e o computador informará o resultado da subtração. 
// •	Caso ele queira dividir (/), deverá informar dois números e o computador informará o resultado da divisão. 
// •	Caso ele queira multiplicar (*), deverá informar dois números e o computador informará o resultado da multiplicação. 
// •	Se o usuário quiser sair do programa informará tal opção (S).
// •	Para qualquer outro caso o computador deverá informar (Opção inválida).

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main(){

    char op;
    double num1, num2, soma, subtracao, multiplicacao, div;

   do{

        cout << "****Calculadora****" << endl;
        cout << " Digite a operacao matematica que voce deseja realizar" << endl;
        cout << " Digite (+) para soma" << endl;
        cout << " Digite (-) para subtracao" << endl;
        cout << " Digite (/) para divisao" << endl;
        cout << " Digite (*) para multiplicacao" << endl;
        cout << " Digite S para sair" << endl;
        cin >> op;
        op = toupper(op);

        if(op == 'S'){
            cout << "FIM DO PROGRAMA!" << endl;
            break;
        }

        cout << " Informe o primeiro numero: ";
        cin >> num1;
        cout << " Informe o segundo numero: ";
        cin >> num2;

        switch(op){

            case '+':
                soma = num1 + num2;

                cout << "O resultado da soma e "  << fixed << setprecision(2) << soma  << endl;
                break;

            case '-':
                subtracao = num1 - num2;

                cout << "O resultado da subtracao e " << fixed << setprecision(2) << subtracao << endl;
                break;

            case '/':
                div = num1/num2;

                cout << " O resultado da divisao e: " << fixed << setprecision(2) << div << endl;
                break;

            case '*':
                multiplicacao = num1 * num2;

                cout << " O resultado da multiplicacao e: " << fixed << setprecision(2) << multiplicacao << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
      
        }

   }
    while(op !='S');
    cout << endl;
    
}