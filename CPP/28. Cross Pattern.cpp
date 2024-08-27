// Cross Pattern

#include <iostream>
using namespace std;


#include <iostream>
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    
    for (int i = 1; i<= rows; i++) {
        for (int j = 1; j <= rows ; j++) {  // Proper divisors are less than num
            if (i==j||(i+j==rows+1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

