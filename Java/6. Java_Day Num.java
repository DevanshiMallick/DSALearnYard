//Switch case example
//input(1-7)-> print which day it is

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        // Note: Don't change class name
		Scanner sc = new Scanner(System.in);

		int day_num = sc.nextInt();
        //print largest out of three Number
        
		switch(day_num){
		    case 1:
		        System.out.println("Mon");
		        break;
		    case 2:
		        System.out.println("Tue");
		        break;
		    case 3:
		        System.out.println("Wed");
		        break;
		    case 4:
		        System.out.println("Thurs");
		        break;
		    case 5:
		        System.out.println("Fri");
		        break;
		    case 6:
		        System.out.println("Sat");
		        break;
		    case 7:
		        System.out.println("Sun");
		        break;
		    default:
		        System.out.println("Invalid Num");
		}
    }
}
