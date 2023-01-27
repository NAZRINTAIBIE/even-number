#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
}
    stud[2];
 
int main()
{
    int i;
 
    printf("Enter information of students:\n");
 
   
    for(i=0; i<3; ++i)
    {
        stud[i].roll = i+1;
 
        printf("\n for roll number:%d\n",stud[i].roll);
 
        printf("Enter name: ");
        scanf("%s",stud[i].name);
 
        printf("Enter marks: ");
        scanf("%f",&stud[i].marks);
 
 
        printf("\n");
    }
 
    printf("Displaying Information:\n\n");
 
    for(i=0; i<3; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(stud[i].name);
        printf("Marks: %.1f",stud[i].marks);
 
        printf("\n");
    }
    return 0;
}

