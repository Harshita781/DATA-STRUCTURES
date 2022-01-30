#include<iostream>
#include<stdlib.h>
using namespace std;
void linear_search(int *arr,int n,int item)
{
   int i;
   cout<<"Item found at index : ";
   for(i=0;i<n;i++)
   {
       if(arr[i]==item)
         cout<<i<<" ";
   }
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
    linear_search(arr,n,item);
    return 0;
}