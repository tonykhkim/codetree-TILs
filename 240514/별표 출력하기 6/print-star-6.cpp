#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i=0;i<=n-1;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout << "  ";
        }

        for (int k=1;k<=2*n-1-2*i;k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i=1;i<=n-1;i++)
    {
        for (int j=n-i-1;j>=1;j--)
        {
            cout << "  ";
        }
        for (int k=1;k<=2*i+1;k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}