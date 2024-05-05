#include <iostream>
using namespace std;

int main()
{
    int n,num;
    int sum_val = 0;
    int cnt = 0;
    double mean = 0;

    cin >> n;

    for (int i=1;i<=n;i++)
    {
        cin >> num;
        sum_val += num;
        cnt += 1;
    }

    mean = (double)sum_val/cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum_val << ' ' << mean;
    return 0;
}