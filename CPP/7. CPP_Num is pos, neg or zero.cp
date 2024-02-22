/* check if the number is positive, zero or negative*/

//concept covered: if ..., elseif..., else

#include <bits/stdc++.h>
using namespace std;

int main(){
   int number;
   cin>>number;
   
   if (number > 0){
       cout<<" positive "<<endl;
   }
   else if (number == 0){ 
       cout<<" zero "<<endl;
   }
   else{
       cout<<" negative "<<endl;
   }
   
   return 0;
}