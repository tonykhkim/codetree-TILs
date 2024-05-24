#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 65;

    for (int i=n;i>=1;i--)
    {
        for (int j=1;j<=n-i;j++)
        {
            cout << ' ' << ' ';
        }
        for (int k=i;k>=1;k--)
        {
            cout << (char)cnt << ' ';

            if ((char)cnt == 'Z')
            {
                cnt = 64;
            }
            cnt += 1;
        }

        cout << endl;
    }
    return 0;
}