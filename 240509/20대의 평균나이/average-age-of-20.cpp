#include <iostream>
using namespace std;

int main()
{
    int cnt=0;
    int sum=0;
    int old;

    while (true)
    {
        cin >> old;

        if (old > 29)
        {
            break;
        }
        sum += old;
        cnt += 1;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)sum/cnt;
    return 0;
}