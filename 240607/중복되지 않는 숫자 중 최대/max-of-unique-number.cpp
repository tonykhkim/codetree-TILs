#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int max = INT_MIN;

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for (int i=0;i<n;i++)
    {
        if (arr[i] > max)
        {

            int count = 0;

            for (int j=0;j<n;j++)
            {
                if (arr[j] == arr[i])
                {
                    count++;
                }
            }

            if (count == 1)
            {
                max = arr[i];
            }
        }
    }

    cout << max;
    return 0;

}