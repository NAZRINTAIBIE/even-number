import java.util.Scanner;
public class JavaHollowPattern1
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.print("Enter the number of rows: ");
int rows=sc.nextInt();
for(int i=1; i<=rows; i++)
{
  for(int j=i; j<=rows; j++)
  {
     System.out.print(" ");
  }
  for(int j=1; j<=i; j++)
 {
  
  if(i==rows || j==1 || j==i)
     {
     System.out.print("*");
     }
     else
     {
     System.out.print(" ");
     }
 }
 System.out.println();
}
}
}