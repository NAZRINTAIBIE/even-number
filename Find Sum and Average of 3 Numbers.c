#include<stdio.h>
int main()
{
  
  float num1, num2, num3;
  float sum, avg;

 
  printf("Enter three Numbers: ");
  scanf("%f %f %f",&num1, &num2, &num3);

  
  sum = num1 + num2 + num3;

  
  avg = sum / 3;

  
  printf("Entered numbers are: %.2f, %.2f and %.2f\n",
           num1, num2, num3);

  
  printf("Sum=%.2f\n", sum);
  printf("Average=%.2f\n",avg );

  return 0;
}

