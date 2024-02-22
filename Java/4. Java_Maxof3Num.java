import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        // Note: Don't change class name
		Scanner sc = new Scanner(System.in);

		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		
        //print largest out of three Number
        
		if (a >= b && a >= c){
			System.out.println(a);
		}
		else if (b >= a && b >= c) {
			System.out.println(b);
		}
		else {
		    System.out.println(c);
		}
		
		
		//ternary operator method 
		//System.out.println(a>b?:a:b); 
    }
}
