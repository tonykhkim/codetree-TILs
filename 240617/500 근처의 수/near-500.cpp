#include <iostream>
using namespace std;

int main()
{
    int up[10];
    int down[10];
    int n;
    int up_cnt = 0;
    int down_cnt = 0;
    int max_idx = 0;
    int min_idx = 0;

    for (int i=0;i<10;i++)
    {
        cin >> n;
        if (n > 500)
        {
            up[down_cnt] = n;
            // cout << n << " up " << endl;
            down_cnt += 1;
        }
        else
        {
            down[up_cnt] = n;
            // cout << n << " down " << endl;
            up_cnt += 1;
        }
    }

    // cout << "up_cnt : " << up_cnt << " , " << "down_cnt : " << down_cnt << endl;

    for (int i=0;i<down_cnt;i++)
    {
        // cout << up[i] << endl;
        if (up[i] < up[min_idx])
        {
            min_idx = i;
        }
    }

    //cout << "------------------------" << endl;

    for (int i=0;i<up_cnt;i++)
    {
        // cout << down[i] << endl;
        if (down[i] > down[max_idx])
        {
            max_idx = i;
        }
    }

    cout << down[max_idx] << " " << up[min_idx];

    return 0;
}