#include<iostream>
using namespace std;

int occurence(int *arr,int n,int x)
{
    int count = 1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[x])
        {
            count++;
        }

    }
    return 0;
}
int main()
{
    int n,x;
    cout<<"Enter size of array :";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter elements into array:";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter value of x :";
    cin>>x;
    cout<<"Occurence of x :"<<occurence(arr,n,x);
    return 0;
}