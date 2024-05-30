#include <iostream>
using namespace std;

int main()
{
    int n,m,val;

    int cnt = 0;

    cin >> n >> m;

    for (int i=0;i<n;i++)
    {
        cin >> val;

        if (val==m)
        {
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}