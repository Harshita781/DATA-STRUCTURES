#include<iostream>
#include<stdlib.h>
using namespace std;
void binary_search(int *arr ,int n , int x)
{
int low =0,high,mid=0,pos = 0;
high = n-1;
while(low <= high)
{
mid = (low + high)/2;
if (arr[mid] == x)
{
pos = mid;
break;
}
else if ( x< arr[mid])
{
high = mid - 1;
}
else
{
low = mid + 1;
}
}
if (pos < 0)
{
cout<<"Element is not found ";
}
else
cout<<"Element is found at position :"<<pos;
}
int main()
{
int n,x;
cout<<"Enter the size of the array: ";
cin>>n;
int *arr=new int[n];
cout<<"Enter the elements of the array :";
for(int i=0; i<n; i++)
{
cin>>arr[i];
}
cout<<"Enter the element , which you want to search in the array :";
cin>>x;
binary_search(arr,n,x);
return 0;
}
