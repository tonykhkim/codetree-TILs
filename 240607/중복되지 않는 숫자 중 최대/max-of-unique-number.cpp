#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }

    int max = -1;

    for (int j=0;j<n;j++)
    {
        int curr = arr[j];

        if (max < curr)
        {
            int count = 0;
            for (int k = 0;k<n;k++)
            {
                if (arr[k] == curr)
                {
                    count ++;
                }
            }

            if (count == 1)
            {
                max = curr;
            }
        }
    }

    cout << max;
    return 0;
}