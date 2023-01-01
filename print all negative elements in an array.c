#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
    int arr[MAX_SIZE]; 
    int i, num;
    
    printf("Enter size of the array: ");
    scanf("%d", &num);
   
    printf("Enter elements in array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAll negative elements in array are: ");
    for(i=0; i<num; i++)
    {
        
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}

