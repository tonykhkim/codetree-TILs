#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int sum_val = 0;
    int cnt = 0;
    double mean = 0;

    cin >> a >> b;

    for (int i=a;i<=b;i++)
    {
        if (i%5==0 || i%7==0)
        {
            sum_val += i;
            cnt += 1;
        }
    }
    mean = (double)sum_val/cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum_val << ' ' << mean;

    return 0;
}