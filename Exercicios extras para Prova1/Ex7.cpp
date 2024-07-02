// Escreva um programa para ler uma temperatura em graus Celsius, calcular e escrever o valor correspondente em graus Fahrenheit. 
// Fórmula para conversão:  F=C*1.8+32
#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
   int temp_celsius, temp_fahrenheit;
    
    cout << "Informe uma temperatura em graus Celsius para que seja calculado o correspondente em graus Fahrenheit: ";
    cin >> temp_celsius;

    temp_fahrenheit = temp_celsius *  1.8 + 32;

    cout << "O correspondente de " << temp_celsius << " graus celsius em fahrenheit e: " << temp_fahrenheit << " graus F" << endl;

}