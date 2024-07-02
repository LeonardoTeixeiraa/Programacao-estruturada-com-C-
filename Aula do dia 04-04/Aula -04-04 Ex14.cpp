// 14.	A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
// •	média do salário da população; 
// •	média do número de filhos; 
// •	maior salário; . 

#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){

    int numFilhos[15], i, mediaFilhos, somaFilhos = 0;
    float salario[15], mediaSalario, somaSalario = 0, maiorSalario;


    cout << "Para cada habitante digite o salario e o numero de filhos " << endl;
    for(i=0; i < 15; i++){
        cout << "Digite o salario para o " << i + 1 << " habitante: ";
        cin  >> salario[i];
        somaSalario += salario[i];
        cout << "Digite a quantidade de filhos do " << i + 1 << " habitante: ";
        cin >> numFilhos[i];
        somaFilhos += numFilhos[i];
        cout << endl;
    }
    
    mediaSalario = somaSalario / 15;
    mediaFilhos = somaFilhos / 15;

    maiorSalario = salario[0];

    for (i=1; i < 15; i++){
        if(salario[i] > maiorSalario){
            maiorSalario = salario[i];
        }
    }

    cout << "A media do salario dos 15 habitantes e: " << fixed << setprecision(2) << mediaSalario << " R$" << endl;
    cout << "A media do numero de filhos dos 15 habitantes e de: " << mediaFilhos << " filhos" << endl;
    cout << "O maior salario e: " << maiorSalario  << " R$" << endl;

}