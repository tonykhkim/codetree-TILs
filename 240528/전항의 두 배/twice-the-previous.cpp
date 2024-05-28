#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    cin >> arr[0] >> arr[1];

    for (int i=2;i<=9;i++)
    {
        arr[i] = arr[i-1]+2*arr[i-2];
    }

    for (int j=0;j<=9;j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}