#include<stdio.h>
 int main()
 {
   int number;

   printf("Enter a number: ");
   scanf("%d",&number);

   if(number%7==0)
   {
     printf("%d is multiple of 7.",number);
   }
   else
   {
     printf("%d is not multiple of 7.",number);
   }

   return 0;
 }

