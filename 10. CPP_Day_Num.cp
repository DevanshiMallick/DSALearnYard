/* find the larger num amongst 3 user input number*/

//concept covered: switch case

#include <bits/stdc++.h>
using namespace std;

int main(){
   int number;
   cin>>number;
   
   switch(number){
       case 1:{
           cout<< "mon";
           break;
       }
       case 2:{
           cout<< "tue";
           break;
       }
       case 3:{
           cout<< "wed";
           break;
       }
       case 4:{
           cout<< "thurs";
           break;
       }
       case 5:{
           cout<< "fri";
           break;
       }
       case 6:{
           cout<< "sat";
           break;
       }
       case 7:{
           cout<< "sun";
           break;
       }
       default:
       cout<<"Invalid Input";
   }
   return 0;
}