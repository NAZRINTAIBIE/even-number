#include <stdio.h>
struct student                 
    {
        char name[50];          
        int id;                 
        char branch[20];        
        int age;                
        char place[50]; 
    } std;                     
int main()
{

    
    printf("Enter Student Information\n");     
    printf("----------------------------\n");
    printf("enter name :");
	 scanf("%s",std.name);              
  
    printf("enter id :");
    scanf("%d",&std.id);
   
    printf("enter branch name :");
    scanf("%s",std.branch);
	printf("enter age :");
    scanf("%d",&std.age);
   
    printf("enter location :");
    scanf("%s",std.place);
    printf("Displaying Student Information\n");
    printf("----------------------------\n");
   
    printf(" name: %s\n", std.name);      
    printf(" id: %d \n", std.id);
    printf(" branch: %s \n", std.branch);
    printf(" age: %d\n", std.age);
    printf(" place: %s \n", std.place);
	   return 0;
}

