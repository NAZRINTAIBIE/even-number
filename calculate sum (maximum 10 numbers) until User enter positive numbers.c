#include<stdio.h>
int main()
{
  int sum=0, number, i=1;

  while(1) 
  {

    printf("Enter the number:");
    scanf("%d",&number);

    
    if(number < 0)
     break;

    sum += number; 
    i++;

    if( i>10 ) 
    break;

  }

  printf("Sum= %d", sum);

  return 0;
}

