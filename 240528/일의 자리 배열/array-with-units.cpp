#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int temp;

    cin >> arr[0] >> arr[1];

    for (int i=2;i<=9;i++)
    {
        temp = arr[i-2]+arr[i-1];

        if (temp>=10)
        {
            arr[i] = temp%10;
        }
        else
        {
            arr[i] = temp;
        }
    }

    for (int j=0;j<=9;j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}