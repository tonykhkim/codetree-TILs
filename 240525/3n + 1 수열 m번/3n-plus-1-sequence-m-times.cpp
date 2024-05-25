#include <iostream>
using namespace std;

int main()
{
    int m;
    int n;
    cin >> m;

    for (int i=1;i<=m;i++)
    {
        cin >> n;

        int cnt = 0;

        while (n!=1)
        {
            if (n%2==0)
            {
                n /= 2;
            }
            else
            {
                n = n*3+1;
            }
            cnt += 1;
        }
        cout << cnt << endl;
    }
    return 0;
}