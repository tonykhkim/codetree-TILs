#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    int n;

    for (int i = 1; i<=10;i++)
    {
        cin >> n;
        if (n%2==1)
        {
            cnt += 1;
        }
    }
    cout << cnt ;
    return 0;
}