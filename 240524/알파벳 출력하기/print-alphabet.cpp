#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 65;

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout << (char)cnt;

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