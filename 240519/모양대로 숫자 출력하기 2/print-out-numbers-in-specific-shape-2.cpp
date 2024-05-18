#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cnt += 2;

            if (cnt > 8)
            {
                cnt = 2;
            }
            cout << cnt << ' ';
        }
        cout << endl;
    }
    return 0;
}