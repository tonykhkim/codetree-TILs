#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for (int i=n;i>=1;i--)
    {
        for (int j=1;j<=n-i;j++)
        {
            cout << "  ";
        }
        for (int j=1;j<=i;j++)
        {
            count += 1;

            if (count > 9)
            {
                count = 1;
            }

            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}