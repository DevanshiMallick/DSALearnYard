// Given a number n, find all the perfect numbers form 1 to namespace
// A number X is a perfect number if the sum of proper divisors 
//of the number is equal to X itself

#include <iostream>
using namespace std;


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int num = 1; num <= n; num++) {
        int sum = 0;
        for (int i = 1; i <= num -1 ; i++) {  // Proper divisors are less than num
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            cout << "The number " << num << " is a perfect number" << endl;  // Use 'num' instead of 'n'
        }
    }
    return 0;
}

