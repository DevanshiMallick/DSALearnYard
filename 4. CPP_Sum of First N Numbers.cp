//sum of first n numbers
#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   
   int sum = n * (n + 1) / 2;
   
   cout<<"sum of first n natural numbers is: "<< sum;
   return 0;
}