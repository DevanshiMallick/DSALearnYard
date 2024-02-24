/* https://www.hackerrank.com/challenges/fizzbuzz/problem 
Given a number N, iterate i=1 to N:
print "FizzBuzz" if i is a multiple of both 3 and 5
print "Fizz" if i is a multiple of 3 only
print "Buzz" if i is a multiple of 5 only
Otherwise, print the value of i
*/

//concept covered: while

#include <bits/stdc++.h>
using namespace std;

int main(){
   int number;
   cin>>number;
   int sum = 0;
   for (int ctr=1; ctr<=number; ctr++){
       if((ctr%3==0)&&(ctr%5==0)){
           cout<<"FizzBuzz"<<endl;
       }
       else if (ctr%3==0){
           cout<<"Fizz"<<endl;
       }
       else if(ctr%5==0){
           cout<<"Buzz"<<endl;
       }
       else{
           cout<<ctr<< ":";
           cout<<ctr<<endl;
           sum = sum + ctr;
           cout<<sum<<endl;
       }
       if (sum>2*ctr){
           break;
       }
   }
   return 0;
}
