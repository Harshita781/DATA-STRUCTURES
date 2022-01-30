#include<iostream>
#include<stdlib.h>
using namespace std;
void find_Pairs(int *arr,int n, int target)
{
        for(int i=0; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(target-arr[i]==arr[j])
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    } 
}
int main()
{
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
    }
    int target,num;
    cin>>target;
    find_Pairs(arr,n,target);
    return 0;
}