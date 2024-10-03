#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n] = {};
    char alpha;
    int len = 0;
    int count = 0;

    for (int i = 0; i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> alpha;

    for (int i=0;i<n;i++)
    {
        if (arr[i][0] == alpha)
        {
            len += arr[i].length();
            count += 1;
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << count << ' ' << (double)len/count;

    return 0;
}