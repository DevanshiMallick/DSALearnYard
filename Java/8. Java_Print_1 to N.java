// take an integer (n)
//print all the numbers from 1 to n in increasing order 

import java.util.Scanner;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //for increasing order
        for (int ctr=1; ctr < n+1; ctr++){
            System.out.println(ctr);
        }
        //for decreasing order
        for(int ctr2=n; ctr2 >= 1; ctr2--){
            System.out.println(ctr2);
        }
    }
}