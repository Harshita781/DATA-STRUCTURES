#include<iostream>
#include<stdlib.h>
using namespace std;

void display(int *arr,int n)
{    
     int i;
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
}
void left_rotate(int *arr,int n,int d)
{
    for(int i=0;i<d;i++){
        int temp=arr[0];
        for(int i=0;i<=n-2;i++)
        {
           arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
}
 
int main() {
	    int n,d;
        cout<<"Enter array size: ";
	    cin>>n;
	    int *arr=new int [n];
        cout<<"Enter array elements: ";
	    for(int i=0;i<n;i++)
        {
	    cin>>arr[i];
	    }
        cout<<"Enter number of shifts: ";
        cin>>d;
	    left_rotate(arr,n,d);
	    display(arr,n);
	
	return 0;
}

