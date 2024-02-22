#include <bits/stdc++.h>
using namespace std;

int main(){
    int number = 99;
    cout<<number<<endl;
    
    number++; //post increment
    //same as number = number + 1;
    
    number--; //post decrement
    //same as number = number - 1;
    
    int old_number2 = 7;
    int new_number2 = (old_number2++)+1; //post increment will show changes in the line followed by this
    cout<<old_number2<<endl; //change in old_number can be observed here
    cout<<new_number2<<endl;
    
    int old_number3=7;
    int new_number3 = (old_number3--)+1;
    cout<<old_number3<<endl;
    cout<<new_number3<<endl;
    
    //pre increment- reflected in the same line 
    int oldnum4 = 7;
    int newnum4 = (++oldnum4)+1;
    cout<< oldnum4<<endl;
    cout<< newnum4<<endl;

    return 0;
}