#include <iostream>

using namespace std;

int main()
{
    int n;
    int ali_sum=0;

    cin >> n;

    for (int i=1;i<n;i++)
    {
        if (n%i==0)
        {
            ali_sum += i;
        }
    }

    if (ali_sum==n)
    {
        cout << 'P';
    }
    else 
    {
        cout << 'N';
    }
    return 0;
}