#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
   int i  = 1, num;

   cout << "Informe um numero: ";
   cin >> num;
   cout << "Os 10 antecessores de " << num << " sao:\n";

   while(i <= 10){
    cout << num - i << endl;
    i++;
   }

}