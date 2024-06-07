#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    int max = INT_MIN;
    int next_max = INT_MIN;
    int index1 = 0;
    int index2 = 0;

    cin >> n;

    int arr[n];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
            index1 = i;
        }
    }

    cout << "index1 : " << index1 << endl;

    for (int j=0;j<=n;j++)
    {
        if (arr[j] > next_max && arr[j] <= max && j != index1)
        {
            next_max = arr[j];
            index2 = j;
        }
    }

    cout << "index2 : " << index2 << endl;

    cout << max << " " << next_max;
    return 0;

}