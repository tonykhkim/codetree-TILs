#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=n;i<=100;i++)
    {
        if (i>=90)
        {
            cout << 'A' << ' ';
        }
        else if (i >= 80 && i < 90)
        {
            cout << 'B' << ' ' ;
        }
        else if (i >= 70 && i < 80)
        {
            cout << 'C' << ' ';
        }
        else if (i >= 60 && i < 70)
        {
            cout << 'D' << ' ';
        }
        else
        {
            cout << 'F' << ' ';
        }
        
    }
    return 0;
}