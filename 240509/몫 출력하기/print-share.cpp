#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    int n;

    while (true)
    {
        cin >> n;
        
        if (cnt >= 3)
        {
            break;
        }

        if (n%2==0)
        {
            cout << n/2 << endl;
            cnt += 1;
            //cout << "cnt: " << cnt << endl;
        }

        
        
    }
    return 0;
}