# Data Structures and Algorithms in C

## Won't count towards prize

//bubble sort
#include<stdio.h>
void swap(*a,*b)
{
	int c=*a;
	*a=*b;
	*b=c;
}

void main()
{
	int ar[20],n,i,j;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
	    {
	    	if(ar[j]>ar[j+1])
	    		swap(&ar[j],&ar[j+1]);
	    }
	}

	for(i=0;i<n;i++)
		printf("Sorted array is: %d ",ar[i]);
}
