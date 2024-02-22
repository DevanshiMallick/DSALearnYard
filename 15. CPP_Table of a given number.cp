/* print the table of a given number */

//concept covered: while

#include <bits/stdc++.h>
using namespace std;

int main(){
   int number;
   cin>>number;
   
   int ctr=1;
   while(ctr!=11){
       cout<<ctr*number<<endl;
       ctr++;
   }
   
   return 0;
}