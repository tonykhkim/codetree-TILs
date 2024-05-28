#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[3];

    cin >> n;

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for (int j=0;j<n;j++)
    {
        cout << arr[j]*arr[j] << " ";
    }
    return 0;
}