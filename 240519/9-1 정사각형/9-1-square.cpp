#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 10;

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cnt -= 1;

            if (cnt < 1)
            {
                cnt = 9;
            }

            cout << cnt;
        }
        cout << endl;
    }
    return 0;
}