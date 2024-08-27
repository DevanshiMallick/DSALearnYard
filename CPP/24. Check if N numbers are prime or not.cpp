// print all prime numbers from 1 to n
#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    for (int number =0;number<=n;number++){
        cout<<" the number "<<number<<" is ";
        if (number<=1){
            cout<<"not prime"<<endl;
        }
        else{
            int flag=0;
            for (int i=2; i<=number-1;i++){
                if (number%i==0){
                    flag=1;
                    break;
                }
            }
            if (flag==0){
                cout<<"prime"<<endl;
            }
            else {
                cout<<"not prime"<<endl;
            }
        }
    }
    return 0;
}