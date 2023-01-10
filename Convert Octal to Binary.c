#include<stdio.h>
 #include<math.h>
 int main()
 {
     int oct, dec=0, bin=0, i=0;

     printf("Enter Octal Number: ");
     scanf("%d",&oct);

     
     while(oct != 0)
     {
         dec += (oct%10) * (pow(8,i));
         oct /= 10;
         i++;
     }

    
     i=1;
     while(dec != 0)
     {
         bin += (dec%2) * i;
         dec /= 2;
         i *= 10; 
     }

     printf("Binary Value=%d",bin);

     return 0;
 }

