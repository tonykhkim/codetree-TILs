#include <iostream>
using namespace std;

int main()
{
    int n;
    bool condition = false;
    
    cin >> n;

    for (int i=2;i<=(n-1);i++)
    {
        if (n % i ==0)
        {
            condition = true;
        }
    }

    if (condition==true)
    {
         cout << 'C';
    }
    else
    {
        cout << 'N';
    }
    return 0;
}