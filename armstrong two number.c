#include <math.h>
#include <stdio.h>
int main()
{
  int l, h, num, originalNum, rem, count = 0;
  double result = 0.0;
  printf("Enter two numbers\n ");
  scanf("%d %d", &l, &h);
  printf("Armstrong numbers between %d and %d are", l, h);
  if (h < l)
  {
    h += l;
    l = h - l;
    h -= l;
  }
  for (num = l + 1; num < h; ++num)
   {
    originalNum = num;
    while (originalNum != 0)
	 {
      originalNum /= 10;
      ++count;
    }

    originalNum = num;
    while (originalNum != 0) 
	{
      rem = originalNum % 10;
      result += pow(rem, count);
      originalNum /= 10;
    }
  if ((int)result == num) 
  {
      printf("%d ", num);
    }
    count = 0;
    result = 0;
  }

  return 0;
}

