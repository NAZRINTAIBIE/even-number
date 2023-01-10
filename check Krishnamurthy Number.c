#include<stdio.h>
int main()
{
  int number,i, temp, sum, currentDigit, fact;
  printf("Enter an Integer: ");
  scanf("%d",&number);
  temp = number;
  sum = 0;

  while(temp!=0)
  {
    currentDigit = temp % 10;
    fact = 1;

    
    for( i=1; i<=currentDigit; i++)
    {
      fact *= i;
    }

    sum += fact;
    temp /= 10;
  }

  if(sum == number)
  {
    printf("%d is Krishnamurthy Number.",number);
  }
  else
  {
    printf("%d is not a Krishnamurthy Number.",number);
  }

  return 0;
}

