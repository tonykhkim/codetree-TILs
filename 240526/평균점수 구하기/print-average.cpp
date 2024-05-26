#include <iostream>
using namespace std;

int main()
{
    double val;

    double sum=0;
    int cnt = 0;

    for (int i=0;i<=7;i++)
    {
        cin >> val;
        sum += val;
        cnt += 1;
    }
    cout << fixed;
    cout.precision(1);

    cout << sum/cnt;
}