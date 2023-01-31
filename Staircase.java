import java.util.*;
import java.lang.*;
import java.io.*;

public class Staircase
{
	public static void main (String[] args) throws java.lang.Exception
	{
		//your code here
    Scanner sc= new Scanner(System.in);
     int n = sc.nextInt();
	 for(int i=1; i<=n; i++)
	 {
	 //ith ine is here 
	 for(int j=1; j<=n-i; j++)
	 {
		System.out.print(" ");
	 }
	 for(int k=1; k<=i; k++)
	 {
	System.out.print("#");
	}
   System.out.println();
}
}
}