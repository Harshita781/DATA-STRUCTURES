#include<iostream>
#include<stdlib.h>
using namespace std;
void reverse(int *arr,int n)
{   
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n; 
    cout<<"Enter array size: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    return 0;
}