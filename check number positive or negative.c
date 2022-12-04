#include<stdio.h>
 
int main()
{
    float num;
 
    printf("Enter a number: \n");
    scanf("%f", &num);
    if (num > 0.0)
        printf("%f is a positive number \n", num);
    else if (num < 0.0)
        printf("%f is a negative number \n", num);
    else
        printf("0 is neither positive nor negative");
return 0;
}

