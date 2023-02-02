import java.util.*;
import java.lang.*;
import java.io.*;
public class Hollow rhombus
{
	public static void main (String[] args) throws java.lang.Exception
	{
    Scanner sc=new Scanner(System.in);
    int rows=sc.nextInt();
    int i, j;
        for (i=1; i<=rows; i++)
        {
            for (j=1; j<=rows - i; j++)
                System.out.print(" ");
              
            if (i==1 || i==rows)
                for (j=1; j<=rows; j++)
                    System.out.print("*");
                  
            else
                for (j=1; j<=rows; j++)
                    if (j==1 || j==rows)
                        System.out.print("*");
                    else
                        System.out.print(" ");
        
            System.out.println();
        }
	}
}