// C program for implementation of Bubble sort
#include <stdio.h>
void swap(int *x, int *y);
void bubbleSort(int arr[], int n);
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
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++) 
	{
        for (j = 0; j < n-i-1; j++)
		{
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
		}
	}
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
