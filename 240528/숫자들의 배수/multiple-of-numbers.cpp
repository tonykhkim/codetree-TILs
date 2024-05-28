#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt=0;
    int num = 1;

    while (cnt!=2)
    {
        cout << n*num << " ";

        if ((n*num)%5==0)
        {
            cnt += 1;
        }

        num += 1;
    }
    return 0;
}