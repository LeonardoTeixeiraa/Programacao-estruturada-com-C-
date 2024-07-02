#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
   int i = 1;

   while( i <= 1000 )
   {
        if(i % 10 == 0)
        {
             cout << i << endl;
        }
       i++;
   }
}