/* print even numbers from 1 to N */

//concept covered: if

#include <bits/stdc++.h>
using namespace std;

int main(){
   int number;
   cin>>number;
   
   for (int ctr = 0; ctr <= number;  ctr++){
       if (ctr%2==0){
           cout<< ctr<<endl;
       }
   }
   return 0;
}