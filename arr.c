# include<stdio.h>
void main()
{
int i,n,a[100],temp;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=a[0];
for(i=0;i<n-1;i++)
{
a[i]=a[i+1];
}
a[n-1]=temp;
printf("shift one position left");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}


