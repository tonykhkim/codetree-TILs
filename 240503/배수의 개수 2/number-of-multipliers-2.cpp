#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;

    for (int i = 1; i<=10;i++)
    {
        if (i%2==1)
        {
            cnt += 1;
        }
    }
    cout << cnt ;
    return 0;
}