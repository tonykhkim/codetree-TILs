#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int j=0;j<n;j++)
    {
        cin >> arr[j];
    }
    for (int j=n-1;j>=0;j--)
    {
        if (arr[j]%2==0)
        {
            cout << arr[j] << " ";
        }
    }
    return 0;
}