#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
    int i;
    for(i = 1; i <=10; i++)
        cout << setw(5) << i << setw(10) << "X e " <<  setw(15) << 1*6 << endl;
}