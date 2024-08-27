// hcf of 2 numbers 
#include <iostream>
using namespace std;


int main()
{
    int num1, num2, smaller_num;
    cin>>num1>>num2;
    
    int hcf=1;
    
    if (num1<num2){smaller_num=num1;}
    else {smaller_num=num2;}
    
    for (int i=1; i<=smaller_num; i++){
        if ((num1%i==0)&&(num2%i==0)){
            hcf=i;
        }
        //cout<<i<<"  "<<hcf<<endl;
    }
    
    cout<<"the hcf of given numbers is : "<<hcf;
    return 0;
}