//count digits of a number
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit_count=0;
    // if the interviewer asks you to seperately handle when n=0
    //this is a corner case- just print 0
    if (n==0){
        cout<<"The no. of digits in the number are: "<<0;
    }
    else {
        for(int num=n; num>0; num = num/10){
        digit_count++;
        }
        cout<<"The no. of digits in the number are: "<<digit_count;
    }
    
    return 0;
}