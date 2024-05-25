#include <iostream>
using namespace std;

int main()
{
    int start,end;

    cin >> start >> end;
    int count = 0;
    for (int i=start;i<=end;i++)
    {
        int cnt = 0;

        for (int j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                cnt += 1;
            }
        }

        if (cnt == 3)
        {
            count += 1;
        }
    }
    cout << count;
    return 0;
}