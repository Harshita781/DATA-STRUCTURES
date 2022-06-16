#include <iostream>
using namespace std;
long long int Find_sqrt(int n)
{
    int ans = -1;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        long long int sq = mid * mid;
        if (n == sq)
        {
            return mid;
        }
        if (n < sq)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j = j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    cout << Find_sqrt(n);
    int temp=Find_sqrt(n);
    cout << "\nAnswer is " << morePrecision(n, 3, temp) << endl;
    return 0;
}