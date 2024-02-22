import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        // Note: Don't change class name
		Scanner sc = new Scanner(System.in);

		int marks = sc.nextInt();

		if (marks >= 33){
			System.out.println("Pass");
		}
		else {
			System.out.println("Fail");
		}
    }
}
