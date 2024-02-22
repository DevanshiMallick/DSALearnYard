/* wap to take % of a student as input and
print pass if % is >=33 and fail if it is less 
than 33*/

//concept covered: if ..., else...

#include <bits/stdc++.h>
using namespace std;

int main(){
   int percentage;
   cin>>percentage;
   
   if (percentage >= 33){
       cout<<" pass ";
   }
   else{ 
       cout<<" fail ";
   }
   //alternate with ternary operator:
   // (percentage >= 33) ? cout<< "Pass": cout<< "Fail";
   
   return 0;
}