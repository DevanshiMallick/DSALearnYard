//https://codeforces.com/problemset/problem/4/A
//Watermelon problem

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        // Note: Don't change class name
		Scanner sc = new Scanner(System.in);

		int w = sc.nextInt();
        //print largest out of three Number
        
		if ( w > 2 &&  w%2  == 0){ 
			System.out.println("yes");
		}
		else {
		    System.out.println("no");
		}
    }
}
