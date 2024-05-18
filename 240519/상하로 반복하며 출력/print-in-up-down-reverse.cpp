#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = n+1;

    for (int i=1;i<=n;i++)
    {
        int ini = i;

        for (int j=1;j<=n;j++)
        {
            cout << ini;
            ini = sum - ini;
        }
        cout << endl;
    }
    return 0;
}