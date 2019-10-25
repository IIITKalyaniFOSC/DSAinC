// inserting cards from left hand(unsorted) to right hand(sorted) ..(feeling) 
// in place algorithm can be done in one hand only.....(feeling)
#include<iostream>
using namespace std;
void insertionsort(int arr[],int n);



int main()
{

    int n;
    cout<<"enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:\n";
    for(int i=0;i<n;i++)
       cin>>arr[i];
    insertionsort(arr,n);
    cout<<"the sorted array is: \n";
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
       cout<<"\n";
}


void insertionsort(int arr[],int n)
{
    int sorted=0,store,flag=0;
    
    for(int i=1;i<=n-1;i++) // traversing unsorted part assuming arr[0] as sorted
    {
            flag=0;
            int temp;
            temp=arr[i];
            int k=i-1;
                /*for(int j=i-1;j>=0;j--)
                {

                   if(arr[i]>arr[j]) { flag=1; store=j; break;}   // identifying position of element
                   
                }
                if(flag==0) store=-1;  // if element is smallest amongst all those in sorted
                for(int k=i-1;k>=store+1;k--)
                {
                    arr[k+1]=arr[k];    // shifting all greater elements by one position towards right
                }
                arr[store+1]=temp;
               */



              while(temp<arr[k] && k>=0)
              {
                  arr[k+1]=arr[k];
                  k--;
              }
              arr[k+1]=temp;
               

    }





}



/*

for(int i=1;i<=n-1;i++)
temp=arr[i];
j=i-1;   // last index of sorted list
while(temp<=arr[j] && j>=0)
     arr[j+1]=arr[j];
     j--

     arr[j+1]=temp;
































/*
8 |6 10 5 7 9 11 
assume 8 is sorted
see 6 pick it up
6 8| 10 5 7 9 11  | divides sorted and unsorted path
6 8 10| 5 7 9 11   
5 6 8 10|7 9 11
5 6 7 8 10|9 11
5 6 7 8 9 10|11
5 6 7 8 9 10 11|



inserting cards from left hand(unsorted) to right hand(sorted)*/