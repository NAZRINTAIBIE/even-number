#include<stdio.h>
int main()
{
     
     int uppercase_vowel,lowercase_vowel;
	 char c;
     printf("enter an alphabet\n");
     scanf("%c",&c);
     uppercase_vowel = (c =='A'||c =='E'||c =='I'||c =='O'||c =='U');
    lowercase_vowel = (c =='a'||c =='e'||c =='i'||c =='o'||c =='u');
   if(uppercase_vowel ||lowercase_vowel)
     
      printf("%c is a vowel",c);
     
   else
     
      printf("%c is a consonant",c);
      
  return 0;
}
 

