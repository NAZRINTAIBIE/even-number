#include <stdio.h>
 
int main()
{
    int month;
    
    printf("Enter month number (1-12): ");
    scanf("%d", &month); 
 
    if(month == 1)
    {
        printf("Enter month : January \nNo. of days : 31 days");
    }
    else if(month == 2)
    {
        printf("Enter month : February \nNo. of days : 28 or 29 days");        
    }
    else if(month == 3)
    {
        printf("Enter month : March \nNo. of days : 31 days");        
    }
    else if(month == 4)
    {
        printf("Enter month : April \nNo. of days : 30 days");        
    }
    else if(month == 5)
    {
        printf("Enter month : May \nNo. of days : 31 days");
    }
    else if(month == 6)
    {
        printf("Enter month : June \nNo. of days : 30 days");        
    }
    else if(month == 7)
    {
        printf("Enter month : July \nNo. of days : 31 days");        
    }
    else if(month == 8)
    {
        printf("Enter month : August \nNo. of days : 31 days");
    }
    else if(month == 9)
    {
        printf("Enter month : September \nNo. of days : 30 days");
    }
    else if(month == 10)
    {
       printf("Enter month : October \nNo. of days : 31 days");
    }
    else if(month == 11)
    {
        printf("Enter month : November \nNo. of days : 30 days");
    }
    else if(month == 12)
    {
        printf("Enter month : December \nNo. of days : 31 days");;
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }
 
    return 0;
}

