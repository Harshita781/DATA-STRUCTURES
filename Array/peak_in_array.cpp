#include<iostream>
#include<stdlib.h>
using namespace std;

void peakElement(int *arr, int n)
    {
     int peak=arr[0];  
   for(int i=1; i<n-1;i++)
   {
       if(peak<arr[i])
        peak=arr[i];
   }
   cout<<peak;
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
    peakElement(arr,n);
    return 0;
}