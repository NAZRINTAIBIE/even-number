#include<stdio.h>
int main()
{
 int base,exponent;
 float result=1.0;
 printf("enter a base number\n");
 scanf("%d",&base);
 printf("enter an exponent\n");
 scanf("%d",&exponent);
 while(exponent !=0)
  {
    result *=base;
	exponent--;
  }
  printf("result=%0lf",result);
  return 0;
}

