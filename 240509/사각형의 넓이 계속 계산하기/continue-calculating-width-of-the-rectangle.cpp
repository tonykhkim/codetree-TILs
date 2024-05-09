#include <iostream>
using namespace std;

int main()
{
    int n,h;
    char c;

    while (true)
    {
        cin >> n >> h >> c;

        cout << n*h << endl;

        if (c=='C')
        {
            break;
        }
    }
    return 0;
}