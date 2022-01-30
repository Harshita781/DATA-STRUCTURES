#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int *arr, int n)
{
     int i, j; 
    for (i = 0; i < n-1; i++)    
    {
      for (j = 0; j < n-i-1; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
               swap(&arr[j],&arr[j+1]);
            } 
        }
    }
}

void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
            }
}

/* Optimized bubble sort function
void op_bubble_sort(int *arr,int n)
{
    for(int i=1;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }

        }
        if(flag==0)
          break;
    }
}
*/

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
    bubble_sort(arr,n);
    cout<<"Sorted array: ";
    display(arr,n);
    return 0;
}