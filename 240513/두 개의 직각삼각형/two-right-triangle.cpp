#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=1;i<=n;i++)
    {
        for (int j=n-i+1;j>=1;j--)
        {
            cout << '*';
        }

        for (int k=1;k<=2*i-2;k++)
        {
            cout << ' ';
        }

        for (int l=n-i+1;l>=1;l--)
        {
            cout << '*';
        }

        cout << endl;
    }
    return 0;
}