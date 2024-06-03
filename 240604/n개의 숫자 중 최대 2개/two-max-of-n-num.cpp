#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int index;
    int arr[n];

    cin >> n;

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];

        if (arr[i] > max1)
        {
            max1 = arr[i];
            index = i;
        }
    }

    cout << "index : " << index << endl;

    for (int j=0;j<n;j++)
    {
        if (j != index)
        {
            if (arr[j] > max2)
            {
                max2 = arr[j];
            }
        }
        
    }
    cout << max1 << " " << max2;

    return 0;
}