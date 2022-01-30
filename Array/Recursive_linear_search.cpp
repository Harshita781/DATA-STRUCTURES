#include<iostream>
#include<stdlib.h>
using namespace std;
int Rec_linear_search(int *arr,int n,int item)
{  
    if(n==0)
      return -1;
    if(arr[n] == item)
      return n;
    else
      return Rec_linear_search(arr,n-1,item);
}
int main()
{
    int n,i,item;
    cout<<"Enter array size: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>item;
    cout<<"Element found at index: "<<Rec_linear_search(arr,n,item);
    return 0;
}