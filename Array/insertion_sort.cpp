#include<iostream>
#include<stdlib.h>
using namespace std;

void insertion_sort(int *arr, int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j=j-1;
      
    }
      arr[j+1]=key;
    }
    
}

void display(int *arr,int n)
{
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
    insertion_sort(arr,n);
    cout<<"Sorted array: ";
    display(arr,n);
    return 0;
}