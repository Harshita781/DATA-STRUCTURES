#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int  partition(int *arr,int low,int high)
{
    int pivot=arr[low];
    int left=low+1;
    int right=high;
    while(left<=right)
    {
        while(left<=high && arr[left]<=pivot)
        {
            left++;
        }
        while(arr[right]>pivot)
        {
            right--;
        }
        if(left<right)
        {
            swap(&arr[left],&arr[right]);
        }

    }
    swap(&arr[right],&arr[low]);
    return right;
}


void quick_sort(int*arr,int low, int high)
{
    int loc_pivot;
    if(low<high){
       loc_pivot=partition(arr,low,high);
    quick_sort(arr,low,loc_pivot-1);
    quick_sort(arr,loc_pivot+1,high);
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
    int low=0,high=n-1;
    quick_sort(arr,low,high);
    cout<<"Sorted array: ";
    display(arr,n);
    return 0;
}