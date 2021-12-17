#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x);

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) 
		{
			int mid = l + (r - l) / 2; //find mid value
	 
			if (arr[mid] == x)
				return mid;
	 
			if (arr[mid] > x)
				return binarySearch(arr, l, mid - 1, x);
	 
			return binarySearch(arr, mid + 1, r, x);
        }
    return -1;
}
 
int main(void)
{
    int arr[] = { 2, 3, 4, 5, 6, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 40;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)? printf("Element is not present in array"): printf("Element is present at index %d", result);
    return 0;
}