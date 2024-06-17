#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    int max = INT_MIN;
    
    for (int i=0;i<N;i++)
    {
        cin >> arr[i];
    }

    int prev_max_idx = N;

    while(true)
    {
        int max_idx = 0;

        for (int i=1;i<prev_max_idx;i++)
        {
            if (arr[i] > arr[max_idx])
            {
                max_idx = i;
            }
        }
        cout << max_idx + 1 << " ";

        if (max_idx == 0)
        {
            break;
        }

        prev_max_idx = max_idx;

    }
    return 0;
}