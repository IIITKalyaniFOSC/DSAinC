#include<stdio.h>
int main()
{
	int i,j,n,t,a[100];
	printf(" enter no of arrary elements:");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1]){
				t=a[j]; 
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("bubble sorted program:");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}

