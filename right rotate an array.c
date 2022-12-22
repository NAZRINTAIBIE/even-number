#include <stdio.h>
#define size 5 
void printArray(int arr[]);
void rotateByOne(int arr[]);
int main()
{
    int i, num;
    int arr[size];
    printf("Enter 5 elements array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of times to right rotate: ");
    scanf("%d", &num);
    
    num = num % size;
    
    printf("Array before rotationn");
    printArray(arr);
    
    for(i=1; i<=num; i++)
    {
        rotateByOne(arr);
    }
    
    printf("\n\nArray after rotation\n");
    printArray(arr);
    return 0;
}
void rotateByOne(int arr[])
{
    int i, last;
   
    last = arr[size - 1];
    for(i=size-1; i>0; i--)
    {
        arr[i] = arr[i - 1];
    }
   
    arr[0] = last;
}
void printArray(int arr[])
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}

