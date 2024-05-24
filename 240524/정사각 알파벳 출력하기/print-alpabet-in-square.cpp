#include <iostream>
using namespace std;

int main()
{
    int n;
    int cnt = 64;
    cin >> n;

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cnt += 1;
            cout << (char)cnt;
        }
        cout << endl;
    }
    return 0;
}