#include <iostream>

using namespace std;

int main()
{
    int cnt_3 = 0;
    int cnt_5 = 0;

    int n;

    for (int i=1;i<=10;i++)
    {
        cin >> n;

        if (n%3==0)
        {
            cnt_3 += 1;
            //cout << "cnt_3" << ' ';
        }
        if (n%5==0)
        {
            cnt_5 += 1;
            //cout << "cnt_5" << ' ';
        }
    }

    cout << cnt_3 << ' ' << cnt_5;
    return 0;
}