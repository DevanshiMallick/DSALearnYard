// Number Square Pattern

#include <iostream>
using namespace std;


#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows>> cols;
    
    for (int i = 1; i<= rows; i++) {
        int num=i;
        for (int j = 1; j <= cols ; j++) {  // Proper divisors are less than num
            cout<<num;
            num++;
            }
            cout<<endl;
        }
        
    /*method 2 
    for (int i=1; i<=rows;i++){
        for (int j=1; j<cols+i-1;j++){
            cout<<j;
        }
        cout<<endl;
        }
    */
    }
    return 0;
}

