#include <bits/stdc++.h>
using namespace std;
int Binary_Search(int arr[], int n, int key)
{
    int s = 0;     // start
    int e = n - 1; // end
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}
int main()
{
    int n, key;
    cout << "Enter no. of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements in the array seperated by single space: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key whose index you want to find: ";
    cin >> key;
    int index = Binary_Search(arr, n, key);
    cout << "Index of " << key << " is: " << index;
    return 0;
}