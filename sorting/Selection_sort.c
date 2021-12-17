// C program for implementation of Selection sort
#include <stdio.h>
void swap(int *x, int *y);
void selectionsort(int arr[], int n);
void printArray(int arr[], int size);

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
int main()
{
    int arr[] = {5,4,3,2,0,7};
    int n = sizeof(arr)/sizeof(arr[0]); //n=6
    selectionsort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

void selectionsort(int arr[], int n)
{
    int i, j, mid=arr[0]; 
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
		{
          if (arr[j] < arr[mid])
          mid = j;
		}
        swap(&arr[mid], &arr[i]);  
    }
} 

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}