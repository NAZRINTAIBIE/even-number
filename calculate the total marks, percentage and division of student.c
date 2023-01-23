#include <stdio.h>
#include <string.h>
int main()
{
    int rollno, daa, flat, hsti, total;
    float percentage;
    char name[20], div[10];
    
    printf("Input the Roll Number of the student :");
    scanf("%d", &rollno );
    
    printf("Input the Name of the Student :");
    scanf("%s", name);
     
    printf("Input the marks of daa, flat and hsti: ");
    scanf("%d%d%d", &daa, &flat, &hsti);
    
    total = daa + flat + hsti;
    percentage = total/3.0;
    
    if (percentage >= 60)
    strcpy(div, "First");
    
    else
    if (percentage < 60 && percentage >= 48)
        strcpy(div,"Second");
        
    else
        if (percentage <48 && percentage >= 36)
        strcpy(div, "Pass");
        
         else
        strcpy(div, "Fail");
       printf("\nRoll No : %d\nName of Student : %s\n", rollno, name);
       printf("Marks in daa : %d\nMarks in flat : %d\nMarks in Ihsti : %d\n", daa, flat, hsti);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n", total, percentage, div);
}

