/* print numbers from 1 to n */
//concept covered: for loop

#include <bits/stdc++.h>
using namespace std;

int main(){
   int number;
   cin>>number;
   for (int ctr=number; ctr >= 1; ctr--){
       cout<<ctr<<endl;
   }
   return 0;
}