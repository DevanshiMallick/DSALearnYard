/* find the larger num amongst 2 user input number*/

//concept covered: if ..., else...

#include <bits/stdc++.h>
using namespace std;

int main(){
   int number1;
   cin>>number1;
   int number2;
   cin>>number2;
   
   if (number1 > number2){
       cout<<" number 1 is greater "<<endl;
   }
   else{
       cout<<" number 2 is greater "<<endl;
   }
   
   return 0;
}