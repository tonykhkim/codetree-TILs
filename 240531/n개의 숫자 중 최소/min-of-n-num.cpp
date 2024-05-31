#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int min = INT_MAX;
    int arr[n];
    int cnt = 0;

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    for (int i=0;i<n;i++)
    {
        if (arr[i] == min)
        {
            cnt += 1;
        }
    }

    cout << min << " " << cnt;
    return 0;
}