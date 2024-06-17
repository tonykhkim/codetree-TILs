#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int minus[n-1];
    int min = INT_MAX;

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];

        if (i>0)
        {
            minus[i-1] = arr[i]-arr[i-1];
        }
    }

    for (int i=0;i<n-1;i++)
    {
        if (minus[i] < min)
        {
            min = minus[i];
        }
    }

    cout << min;

    return 0;

}