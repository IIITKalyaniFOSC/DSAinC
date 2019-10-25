#include<stdio.h>

void swap(int *a,int *b)
{	int temp;
	temp=*a;
	*a=*b;
	*b=temp;

}

int main()
{	int arr[100],n;
	printf("\n Enter number of elements in array :-");
	scanf("%d",&n);
	printf("\n Enter elements of array \n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int i,j,min_idx;
	for(i=0;i<n-1;i++)
		{
			min_idx=i;
		 	for(j=i+1;j<n;j++)
		 		{
		 			if(arr[j]<arr[min_idx])
		 				min_idx=j;
		 		}
		 	swap(&arr[i],&arr[min_idx]);
	    }
	printf("\n The sorted array is");
	for(int i=0;i<n;i++)
		printf("\n %d \n",arr[i]);

}
