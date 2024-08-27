// prime or not
#include <iostream>
using namespace std;


int main()
{
    int number;
    cin>>number;
    
    if (number <=1){
        cout<<"Not prime"<<endl;
    }
    else {
        int factor_count=0;
        for (int i=1; i<= number;i++){
            if (number%i==0){
                factor_count++;
            }
        }
        if (factor_count==2){
            cout<<"number is prime";
        }
        
        else{
            cout<<"number is not prime";
        }
    }

    return 0;
}