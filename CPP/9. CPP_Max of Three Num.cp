/* find the larger num amongst 3 user input number*/

//concept covered: if ..., else...

#include <bits/stdc++.h>
using namespace std;

int main(){
   int number1;
   cin>>number1;
   int number2;
   cin>>number2;
   int number3;
   cin>>number3;
   
   if (number1 >= number2 && number1 >= number3){
       cout<<" number 1 is greater "<<endl;
   }
   else if ( number2 >=number1 && number2 >= number3){
       cout<<" number 2 is greater "<<endl;
   }
   else {
       cout<<" number 3 is greater";
   }
   
   return 0;
}