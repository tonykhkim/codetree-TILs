#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=1;i<=2*n;i++)
    {
        if (i%2==0)
        {
            for (int j=1;j<=(n+1)-(i/2);j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j=1;j<=(i+1)/2;j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}