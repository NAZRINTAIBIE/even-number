#include<stdio.h>
int main()
{

    int n, sqr, rem, sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    sqr = n*n; 

    while(sqr!=0)
    {
        rem = sqr%10;
        sum += rem; 
        sqr /= 10;  
    }

    if(sum==n)
        printf("%d is a neon number.\n",n);
    else
        printf("%d is NOT a neon number.\n",n);

    return 0;
}

