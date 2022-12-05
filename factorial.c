#include<stdio.h>
int main()
{
  int n,i,fact=1;
   printf("enter a number\n");
   scanf("%d",&n);
        for (i = 1;i<= n;i++) 
		{
            fact=fact* i;
        }
        printf("Factorial of %dis %d", n, fact);
       
   return 0;
}

