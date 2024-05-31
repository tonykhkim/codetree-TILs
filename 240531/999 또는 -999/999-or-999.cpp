#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int max = INT_MIN;
    int min = INT_MAX;

    int val;

    for (int i=0;i<100;i++)
    {
        cin >> val;

        if (val < min)
        {
            min = val;
        }
        else if (val > max)
        {
            max = val;
        }

        if (val == 999 || val == -999)
        {
            break;
        }
    }

    cout << max << " " << min;
    return 0;
}