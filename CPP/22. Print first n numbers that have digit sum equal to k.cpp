// print the first n numbers that have digit sum equal to break

#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    int number=1;
    int count=0;
    while (count<n){
        int digit_sum=0;
        for (int rem=number;rem>0; rem/=10){
            digit_sum+=rem%10;
        }
        if (digit_sum==k) {
            count++;
            cout<<number<<endl;
        }
        number++;
    }
    

    return 0;
}