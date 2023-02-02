import java.util.Scanner;
public class HollowDiamond
 {
	private static Scanner sc;
	
	public static void main(String[] args) {
		sc = new Scanner(System.in);
		
		int n = sc.nextInt();
	    for (int i = 1 ; i <= (n+1)/2; i++ ) 
		{
			for (int j = 1 ; j <=(n+1)/2-i; j++ ) 
			    System.out.print("\t");	
				System.out.print("*");	
			for (int j = 1 ; j<=2*i-2; j++ ) 
			    System.out.print("\t");	
				if (i>1) {
					System.out.print("*");
				}
					System.out.println();
		}
		
		for (int i=n/2; i>=1; i-- ) 
		{
			for (int j = 1 ; j<=(n+1)/2-i; j++ ) 
				System.out.print("\t");
				System.out.print("*");	
			for (int j = 1 ; j<=2*i-2; j++ ) 
			    System.out.print("\t");	
				if (i>1) {
					System.out.print("* ");
				}
					System.out.println();
				}
	}
