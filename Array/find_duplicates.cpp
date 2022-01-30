#include<iostream>
#include<stdlib.h>
using namespace std;

int duplicate(int *arr, int n)
{
    int flag=0,count=1,ele;
    for(int i=0; i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        { 
        if(arr[i]=arr[j])
        {
            count++;
            if(count>flag)
            ele=arr[j];
        }
        } 
    }
     if(count>1)
    {
        cout<<"Duplicates are:"<<ele;
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
    duplicate(arr,n);
    return 0;
}