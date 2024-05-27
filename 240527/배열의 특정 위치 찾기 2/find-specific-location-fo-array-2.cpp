#include <iostream>
using namespace std;

int main()
{
    int val;
    int sum_even = 0;
    int sum_odd = 0;

    for (int i=0;i<=9;i++)
    {
        cin >> val;

        if (i%2==0)
        {
            sum_even += val;
        }
        else
        {
            sum_odd += val;
        }
    }

    if (sum_even > sum_odd)
    {
        cout << sum_even - sum_odd;
    }
    else{
        cout << sum_odd - sum_even;
    }

    return 0;
}