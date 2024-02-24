//https://www.geeksforgeeks.org/problems/sum-of-digits1742/1
class Solution{
public:
    int sumOfDigitsHelper(int N){
        int sum = 0;
        if (N!=0){
            for(int num = N; num>0; num/=10){
                sum+=num%10;
            }
        }
        else{
            sum = 0;
        }
        return sum;
    }

    
    int sumOfDigits(int N){
        int ans = sumOfDigitsHelper(N);
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends