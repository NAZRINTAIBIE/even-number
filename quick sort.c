#include<stdio.h> 
void quickSort(int arr[], int low, int high);

int partition (int arr[], int low, int high) ;

void swap(int* x, int* y) ;

void printArray(int arr[], int size);

int main() 
{ 
    int arr[100] , n, i;

	printf("Enter no of elements in the Array [Maximum 100]: ");
	scanf("%d",&n);
	printf("Enter %d array elements: \n",n);
	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]); 
    
    
    quickSort(arr, 0, n-1); 
    
	printf("\nSorted array in ascending order using Merge Sort Algoithm is as follows:\n");
    printArray(arr, n); 
    return 0; 
} 
void swap(int* x, int* y) 
{ 
    int t = *x; 
    *x = *y; 
    *y = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high], i, j;     
    i = (low - 1);  
  
    for (j = low; j <= high- 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;   
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high);
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d, ", arr[i]); 
    
} 
  

