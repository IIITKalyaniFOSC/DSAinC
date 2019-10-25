#include<stdio.h>
#include<stdlib.h>//for malloc memory declaration
	int bs(int *ptr1);

		int main()
{
		int *ptr,n,i;
		
		ptr=malloc(n*sizeof(int));//makes an array of n blocks;
		
		printf("Enter the size of an array\n");
		
		scanf("%d",&n);
		printf("Enter the array\n");//message for array entry
		
		for(i=0;i<n;i++)
{
		scanf("%d",(ptr+i));
}
		bs(ptr);//bubble sort function is called by passing ptr to be point by pointer ptr1 in bs function
return 0;
}


int bs(int *ptr1)
{
		int temp,round,l,i;
		
		for(l=0;*(ptr1+l)!='\0';l++);//getting the size of an array
		
		for(round=1;round<=l-1;round++)
{
		for(i=0;i<=l-round-1;i++)
{
		if(*(ptr1+i)>*(ptr1+i+1))//comparision for sorting
{
		temp=*(ptr1+i);    //swapping
		
		*(ptr1+i)=*(ptr1+i+1);
		*(ptr1+i+1)=temp;
}
}

}
		for(i=0;i<l;i++)   //printing of sorted value
{
		printf("\t%d",*(ptr1+i));
}
return 0;
}
