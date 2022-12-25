#include <stdio.h>
int main()
{
    int arr[100], size, isUnique;
    int i, j, k;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
   
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    for(i=0; i<size; i++)
    {
        isUnique = 1;
        for(j=i+1; j<size; j++)
        {
           
            if(arr[i]==arr[j])
            {
                
                for(k=j; k<size-1; k++)
                {
                    arr[k] = arr[k+1];
                }
                size--;
                j--;
                isUnique = 0;
            }
        }
        
        if(isUnique != 1)
        {
            for(j=i; j<size-1; j++)
            {
                arr[j] = arr[j+1];
            }
            size--;
            i--;
        }
    }
    
    printf("\nAll unique elements in the array are: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

