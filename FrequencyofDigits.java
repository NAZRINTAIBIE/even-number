import java.util.*;

public class FrequencyofDigits {

	static int FrequencyofDigits(long n, int d) {
        // write code here
		int c=0;
		while(n>0)
			{
				int dig=(int)(n%10);
				if(dig==d)
				{
					c++;
				}
				n=n/10;
			}
		return c;
    }
	
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        int d = sc.nextInt();
        System.out.println(FrequencyofDigits(n, d));
    }
}