#include <iostream>
using namespace std;

int main()
{
    int n;

    int cnt = 0;
    int sum_val = 0;
    double mean = 0.0;

    for (int i=1;i<=10;i++)
    {
        cin >> n;
        if (n>=0 && n<=200)
        {
            sum_val += n;
            cnt += 1;
        }
    }

    mean = (double)sum_val/cnt;
    cout << fixed;
    cout.precision(1);

    cout << sum_val << ' ' << mean;
}