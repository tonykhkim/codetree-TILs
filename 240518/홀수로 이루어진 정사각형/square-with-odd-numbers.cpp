#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=11;i<=11+2*n-1;i+=2)
    {
        for (int j=0;j<=2*n-1;j+=2)
        {
            cout << i+j << ' ';
        }
        cout << endl;
    }
    return 0;
}