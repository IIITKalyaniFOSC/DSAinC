# include<stdio.h>
int swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping first value is=%d\nAfter swapping second value=%d\n",a,b);
	 
	 return a,b;
 
 }  	
int main()
{
	int c,d;
	printf("Enter Two numbers\n");
	scanf("%d\n%d",&c,&d);
	  swap(c,d);
 	
 	
return 0;
}
