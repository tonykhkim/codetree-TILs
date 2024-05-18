#include <iostream>
using namespace std;

int main()
{
    int cnt=0;
    int n;
    cin >> n;

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cnt += 1;
            cout << cnt << ' ';
        }
        cout << endl;
    }
    return 0;
}