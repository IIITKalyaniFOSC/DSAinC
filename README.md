# Data Structures and Algorithms in C

## Won't count towards prize
#include<stdio.h>
void main()
{
    int a[100],n,i,j,minIdx,x;
    printf("\n Enter the Number of Elements: ");
    scanf("%d",&n);
    
    printf("\n Enter %d Elements: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        minIdx=i;
        for(j=i+1;j<n;j++)
        {
            if(a[minIdx]>a[j])
            minIdx=j;
        }
        if(minIdx!=i)
        {
            x=a[i];
            a[i]=a[minIdx];
            a[minIdx]=x;
        }
    }
    
    printf("\n The Sorted array in ascending order: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d\n ",a[i]);
    }
   
}
