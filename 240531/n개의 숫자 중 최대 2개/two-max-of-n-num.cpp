#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    int max = INT_MIN;
    int next_max = INT_MIN;

    cin >> n;

    int arr[n];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }

        for (int j=0;j<=i;j++)
        {
            if (arr[j] > next_max && arr[j] < max)
            {
                next_max = arr[j];
            }
        }
    }

    cout << max << " " << next_max;
    return 0;

}