#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
              min=j;
            if(min!=i)
            {
                swap(&arr[min],&arr[i]);
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
    selection_sort(arr,n);
    display(arr,n);
    return 0;
}