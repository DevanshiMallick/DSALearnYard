/* wap to take % of a student as input and
print pass if % is >=33 and fail if it is less 
than 33*/

//concept covered: if ..., elseif..., else

#include <bits/stdc++.h>
using namespace std;

int main(){
   int percentage;
   cin>>percentage;
   
   if (percentage >= 50){
       cout<<" good "<<endl;
   }
   else if (percentage>=33 && percentage <=50){ 
       cout<<" avg "<<endl;
   }
   else{
       cout<<"fail"<<endl;
   }
   //alternate with ternary operator:
   // (percentage >= 33) ? cout<< "Pass": cout<< "Fail";
   
   return 0;
}