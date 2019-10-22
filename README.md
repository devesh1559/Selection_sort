# Selection_sort
## AIM
 To perform selection sort in an given array
## Theory
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted

## Algorithm
void selection_sort(int a[],int n)
	int i,j,k;
	for(i=0;i<=n-1;i++)
		for(j=k=i;j<n;j++)
			if(a[j]<a[k])
			k=j;
		swap(&a[i],&a[k]);

## Conclusion
In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
