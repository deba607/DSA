// C program to implement Quick Sort Algorithm 
#include <stdio.h> 



// Partition function 
int partition(int arr[], int low, int high) 
{ 

	// initialize pivot to be the first element 
	int pivot = arr[low]; 
	int i = low; 
	int j = high; 
	int temp,temp1;

	 while (i < j) { 
  
        // condition 1: find the first element greater than 
        // the pivot (from starting) 
        while (arr[i] <= pivot) { 
            i++; 
        } 
  
        // condition 2: find the first element smaller than 
        // the pivot (from last) 
        while (arr[j] > pivot) { 
            j--; 
        } 

		// Checking the i and j for the swapping.
        if (i < j) { 
            temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp; 
        } 
    } 
    		temp1=arr[low];
			arr[low]=arr[j];
			arr[j]=temp1; 
    return j; 
} 


// QuickSort function 
void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) { 

		// call Partition function to find Partition Index 
		int partitionIndex = partition(arr, low, high); 

		// Recursively call quickSort() for left and right 
		// half based on partition Index 
		quickSort(arr, low, partitionIndex - 1); 
		quickSort(arr, partitionIndex + 1, high); 
	} 
} 

// driver code 
int main() 
{ 
	 int s,i;
    printf("Enter the size of array: \n");
    scanf("%d",&s);

	int arr[s];
    printf("Enter the array elements: \n");
    for(i=0;i<s;i++) scanf("%d",&arr[i]);

	// printing the original array 
	printf("Original array: "); 
	for (i = 0; i < s; i++) { 
		printf("%d ", arr[i]); 
	} 

	// calling quickSort() to sort the given array 
	quickSort(arr, 0, s - 1); 

	// printing the sorted array 
	printf("\nSorted array: "); 
	for (i = 0; i < s; i++) { 
		printf("%d ", arr[i]); 
	} 

	return 0; 
}


