/* print even numbers from 1 to N */

//concept covered: for and if

#include <bits/stdc++.h>
using namespace std;

int main(){
   int number;
   cin>>number;
   //method 1
   /*
   for (int ctr = 1; ctr <= number;  ctr++){
       if ((ctr%2==0)&&(ctr%7==0)){
           cout<<ctr<<endl;
       }
   }
   */
   
   //method 2
   /*for (int ctr =1; ctr <= number; ctr ++){
       if (ctr%2==0){
           if (ctr%7==0){
               cout<<ctr<<endl;
           }
       }
   }
   */
   
   //method 3-  start from 14 since we already know its the first number
   //divisible by both 2 and 7
   //use updation 7 so that we need not use condition to check
  // if the num is div by seven or not
    for (int ctr = 14; ctr <= number; ctr+=7){
        if (ctr%2==0){
            cout<<ctr<<endl;
        }
   }
   return 0;
}