#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int cnt = 0;
    int max = INT_MIN;

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int j=0;j<n;j++)
    {
        if (max == arr[j])
        {
            cnt += 1;
        }
    }

    if (cnt == 1)
    {
        cout << max;
    }
    else
    {
        cout << -1;
    }
    
    return 0;
}