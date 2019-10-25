#include<stdio.h>
void swap(int*a,int*b)
{	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int arr[100],n,i,j;
	printf("Enter number of elements in an array \n");
	scanf("%d",&n);
	printf("Enter elements for array:-\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
				if (arr[j]>arr[j+1])
					swap(&arr[j],&arr[j+1]);
	printf("\nThe sorted array is\n");			
	for(i=0;i<n;i++)
		printf("%d \n",arr[i]);

				
}