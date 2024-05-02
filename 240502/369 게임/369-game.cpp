#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1;i<=n;i++)
    {
        if (i%3==0)
        {
            cout << 0 << ' ';
        }
        else if (i>10 && i%3==1)
        {
            cout << 0 << ' ' ;
        }
        else if (i>10 && i%3 == 2)
        {
            cout << 0 << ' ';
        }
        else
        {
            cout << i << ' ';
        }
        
    }
    return 0;
}