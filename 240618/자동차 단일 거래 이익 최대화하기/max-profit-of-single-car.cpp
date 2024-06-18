#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max_idx = 0;;
    int min_idx = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for (int i=0;i<n;i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }
    }

    if (min_idx == n-1)
    {
        cout << 0;
    }
    else
    {
        for (int i=min_idx;i<n;i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        if (max-min <= 0)
        {
            cout << 0;
        }
        else
        {
            cout << max - min;
        }
    }
    return 0;
    
}