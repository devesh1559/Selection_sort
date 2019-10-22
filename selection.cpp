#include<stdio.h>
void swap(int*x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void selection_sort(int a[],int n)
{
	int i,j,k;
	for(i=0;i<=n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(a[j]<a[k])
			k=j;
		}
		swap(&a[i],&a[k]);
	}
	
}
int main()
{
	int a[]={20,30,3,4,2};
	selection_sort(a,5);
	int i;
	for(i=0;i<5;i++)
	{
		
		printf("%d\n",a[i]);
	}
}
