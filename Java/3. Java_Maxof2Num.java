import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        // Note: Don't change class name
		Scanner sc = new Scanner(System.in);

		int a = sc.nextInt();
		int b = sc.nextInt();
		

		if (a >= b){
			System.out.println(a);
		}
		else {
			System.out.println(b);
		}
		
		//ternary operator method 
		//System.out.println(a>b?:a:b); 
    }
}
