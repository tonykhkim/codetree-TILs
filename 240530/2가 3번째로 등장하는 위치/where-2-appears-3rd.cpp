#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    int val;

    for (int i=0;i<n;i++)
    {
        cin >> val;

        if (val==2)
        {
            cnt += 1;

            if (cnt==3)
            {
                cout << i+1;
                break;
            }
        }
    }
    return 0;
}