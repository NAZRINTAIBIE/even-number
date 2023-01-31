import java.io.*;
import java.util.*;

public class  BinToDec {

	public static int binToDec(String s)
    {
        //Write code here
		int n=s.length();
		int mult=1;
		int ans=0;
		for(int i=n-1; i>=0; i--)
			{
				if(s.charAt(i)=='1'){
					ans+=(1*mult);
			}
		mult*=2;
    }
	   return ans;
	}
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
    
        int t = sc.nextInt();
        while(t > 0){
            String s = sc.next();
            int ans = binToDec(s);
            System.out.println(ans);
            t -= 1;
        }   
    }
}