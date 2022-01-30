#include<iostream>
#include<stdlib.h>
using namespace std;

void missing(int *arr,int n)
{
    
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
    
    return 0;
}