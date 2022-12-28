// Practical No 05-Implement Bubble sort

#include <stdio.h>
int main()
{
    int a[20],i,j,N,temp;
    printf("\nHow much element do you want to store on array:");
    scanf("%d",&N);
    printf("\nEnter %d Array Elements:",N);
    for(i=0;i<N;i++)
    {       
        scanf("%d",&a[i]);
    }   
    //bubble sort logic
    for(i=1;i<N;i++)
    {      
        for(j=0;j<N-i;j++)
        {           
            if(a[j]>a[j+1])
            {                  
                temp=a[j];
                a[j]=a[j+1];                  
                a[j+1]=temp;
            }
        }
    }
    printf("\nYour Sorted Array Elements: ");
    for(i=0;i<N;i++)
    {       
        printf("%d  ",a[i]);
    }    
    return 0;
}
------------------------------------------------
//Selection sort

#include <stdio.h>
int main()
{
    int a[20],N,i,k,j,temp;
    printf("\nHow much elements wants to store on array:");
    scanf("%d",&N);
    printf("\nEnter %d array elements:",N);
    for(i=0;i<N;i++)
    {          
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)      
    {      
        k=i;                
        for(j=i+1;j<N;j++)
        {            
            if(a[j]<a[k])
            {  
                k=j;   
            }
        }
        if(i!=k)
        { 
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }
    }
    printf("\nYour Sorted Array Elements:");
    for(i=0;i<N;i++)
    {          
        printf("%d  ",a[i]);
    }   
    return 0;
}
----------------------------------------------
// Merge Sort

#include <stdio.h>
#include <stdlib.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l,
		int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	// Create temp arrays
	int L[n1], R[n2];

	// Copy data to temp arrays
	// L[] and R[]
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	// Merge the temp arrays back
	// into arr[l..r]
	// Initial index of first subarray
	i = 0;

	// Initial index of second subarray
	j = 0;

	// Initial index of merged subarray
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements
	// of L[], if there are any
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of
	// R[], if there are any
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted
void mergeSort(int arr[],
			int l, int r)
{
	if (l < r)
	{
		// Same as (l+r)/2, but avoids
		// overflow for large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

// Driver code
int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}
----------------------------------------------------------------
// Shell Sort
 
#include <stdio.h>
void swap(int *a, int *b)
{
    *a=*a + *b;
    *b=*a - *b;
    *a=*a - *b;
    return ;
}
 
// Function definition of sort array using shell sort
void shellsort(int arr[], int nums)
{
    // i -> gap/interval
    for (int i = nums / 2; i > 0; i = i / 2)
    {
        // Traverse j till we reach the end of the sublist.
        for (int j = i; j < nums; j++)
        {
            for(int k = j - i; k >= 0; k = k - i)
            {
                if (arr[k+i] >= arr[k])
                {
                    break;
                }
                else
                {
                    swap(&arr[k], &arr[k+i]);
                }
            }
        }
    }
    return ;
}
 
int main()
{
    int nums;
    printf("Enter total no. of elements :: ");
    scanf("%d", &nums);
    int arr[nums];
    printf("Enter the array:: \n");
    //scan the array elements.
    for (int k =  0 ; k < nums; k++)
    {
                scanf("%d", &arr[k]);
    }
 
    //Call the function of shell sort, bypassing the array base pointer to the first element.
    shellsort(arr, nums);
 
    // After the sorting the array is
    printf("Sorted array is:  \n");
    for (int k = 0; k < nums; k++)
    {
        printf("%d ", arr[k]);
    }	
    return 0;
}
------------------------------------------------------------------------------
// Insertion 

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n=5,key,loc,array[10]={10,20,30,40,50}; //Intilization and Decleartion
	// clear Before Output

	printf("Enter the number : "); //Taking Input from user
	scanf("%d", &key);

	printf("Enter the location you want : ");  //Taking Location from user
	scanf("%d", &loc);

	printf("Array before inserstion : ");  // Printing Array before inserting value
	for(i=0; i<n; i++) //starting loop
	{
		printf("%d\t", array[i]);
	}
	for(i=n-1; i>=loc-1; i--) // second loop start
	{
		array[i+1]=array[i]; // calling array
	}
		array[i+1]=key;
		n++;
		printf("\nArray After insertion :\t"); //printing Array
		for(i=0;i<=n-1;i++)
		{
			printf("%d\t", array[i]);
		}
getch();
return 0;
} // End Main function
-------------------------------------------------------------------------------
//Radix Sort

#include<stdio.h>

// Function to find largest element
int largest(int a[], int n)
{
    int large = a[0], i;
    for(i = 1; i < n; i++)
    {
        if(large < a[i])
            large = a[i];
    }
    return large;
}

// Function to perform sorting
void RadixSort(int a[], int n)
{
    int bucket[10][10], bucket_count[10];
    int i, j, k, remainder, NOP=0, divisor=1, large, pass;

    large = largest(a, n);
    printf("The large element %d\n",large);
    while(large > 0)
    {
        NOP++;
        large/=10;
    }

    for(pass = 0; pass < NOP; pass++)
    {
        for(i = 0; i < 10; i++)
        {
            bucket_count[i] = 0;
        }
        for(i = 0; i < n; i++)
        {
            remainder = (a[i] / divisor) % 10;
            bucket[remainder][bucket_count[remainder]] = a[i];
            bucket_count[remainder] += 1;
        }

        i = 0;
        for(k = 0; k < 10; k++)
        {
            for(j = 0; j < bucket_count[k]; j++)
            {
                a[i] = bucket[k][j];
                i++;
            }
        }
        divisor *= 10;

        for(i = 0; i < n; i++)
            printf("%d  ",a[i]);
        printf("\n");
    }
}

//program starts here
int main()
{
    int i, n, a[10];
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    RadixSort(a,n);
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
----------------------------------------------------------------------
