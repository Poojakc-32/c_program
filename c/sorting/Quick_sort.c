/*
n is the size of the array .
Quicksort is a sorting algorithm based on the divide and conquer approach where

1. An array is divided into subarrays by selecting a pivot element (element selected from the array).
2. While dividing the array, the pivot element (key) should be positioned in such a way that 
   elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.
3. The left and right subarrays are also divided using the same approach. 
4. This process continues until each subarray contains a single element. At this point, elements are already sorted. 
   Finally, elements are combined to form a sorted array.
*/
#include <stdio.h>
int partition(int arr[], int low, int high) ;
void quick_Sort(int arr[], int low, int high);
void printArray(int arr[], int size);

void swap(int *a, int *b) 
{
 int t;
  t =*a;
 *a = *b;
 *b = t;
}

int partition(int arr[], int low, int high) 
{  
  int key = arr[high];  
  int i = (low - 1);

  for (int j = low; j < high; j++) 
  {
    if (arr[j] <= key) 
	{  
      i++;     
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quick_Sort(int arr[], int low, int high) 
{
  if (low < high) 
  {  
		int p = partition(arr, low, high);
		
		quick_Sort(arr, low, p - 1);
		
		quick_Sort(arr, p + 1, high);
  }
}

void printArray(int arr[], int size)
{
     for (int i = 0; i < size; ++i)
	  {
        printf("%d  ", arr[i]);
      }
     printf("\n");
}

int main() 
{
  int arr[] = {8, 7, 2, 1, 0, 9, 6};  
  int n = sizeof(arr) / sizeof(arr[0]);
  
  printf("Unsorted Array\n");
  printArray(arr, n);
  quick_Sort(arr, 0, n - 1);
  
  printf("Sorted array is: \n");
  printArray(arr, n);
}