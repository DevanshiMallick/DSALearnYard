//https://leetcode.com/problems/add-digits/description/

class Solution {
public:
    int addDigitsHelper(int num){
        //corner case
        int sum=0;
        if (num==0){
            return 0;
        }
        while (num>9){
            while (num){
                sum+=(num%10);
                num/=10;
            }
            num=sum;
            sum=0;
        }
        return num;
    }
    int addDigits(int num) {
        int result= addDigitsHelper(num);
        return result;
    }
};