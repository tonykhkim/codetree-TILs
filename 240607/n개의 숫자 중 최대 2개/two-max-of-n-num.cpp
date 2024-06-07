#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    int max = INT_MIN;
    int next_max = INT_MIN;

    cin >> n;

    int arr1[n];
    int arr2[n-1];

    for (int i=0;i<n;i++)
    {
        cin >> arr1[i];

        if (arr1[i] > max)
        {
            max = arr1[i];
        }

        for (int j=0;j<=i;j++)
        {
            if (arr2[j] > next_max && arr2[j] <= max)
            {
                next_max = arr2[j];
            }
        }
    }

    cout << max << " " << next_max;
    return 0;

}