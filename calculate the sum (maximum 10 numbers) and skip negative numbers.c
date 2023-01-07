#include<stdio.h>
int main()
{
  int number,i, sum=0;

  for( i=1 ; i<=10; i++)
  {
    
    printf("Enter number: ");
    scanf("%d",&number);

    
    if( number<0 ) 
     continue;

    
    sum += number; 
  }
  
  
  printf("Sum = %d",sum);

  return 0;
}

