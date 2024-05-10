#include <iostream>
using namespace std;

int main()
{
    int N;
    int cnt=0;

    while (true)
    {
        cin >> N;

        if (N==1)
        {
            cout << cnt;
            break;
        }
        
        if (N%2==0)
        {
            N /= 2;
        }
        else
        {
            N *= 3;
            N += 1;
        }

        cnt += 1;
    }
    return 0;
}