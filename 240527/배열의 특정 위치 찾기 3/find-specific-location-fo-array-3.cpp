#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int sum = 0;

    for (int i=0;i<99;i++)
    {
        cin >> arr[i];

        if (arr[i]==0)
        {
            for (int j=i-1;j>=i-3;j--)
            {
                sum += arr[j];
            }
            break;
        }
        // break;
    }   
    cout << sum;
    return 0;
}