//https://www.geeksforgeeks.org/problems/prime-number2314/1
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
  bool isPrimeHelper (int N)
  {
	if (N <= 1)
	  {
		return false;
	  }
	else
	  {
		for (int i = 2; i <= sqrt (N); i++)
		  {
			if (N % i == 0)
			  {
				return false;
			  }
		  }
	  }
	return true;
  }
  int isPrime (int N)
  {
	bool result = isPrimeHelper (N);
	if (result == 1)
	  {
		return 1;
	  }
	else
	  {
		return 0;
	  }
  }
};


//{ Driver Code Starts.
int
main ()
{
  int t;
  cin >> t;
  while (t--)
	{
	  int N;
	  cin >> N;
	  Solution ob;
	  cout << ob.isPrime (N) << endl;
	}
  return 0;
}

// } Driver Code Ends
