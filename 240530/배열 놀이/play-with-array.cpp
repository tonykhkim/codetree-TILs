#include <iostream>
using namespace std;

int main()
{
    int n,q;
    int q1,q2,q3;
    int cnt;
    
    cin >> n >> q;

    int arr[n];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for (int j=0;j<q;j++)
    {
        cin >> q1;

        if (q1==1)
        {
            cin >> q2;
            cout << arr[q2-1] << endl;
        }
        else if (q1==2)
        {
            cin >> q2;
            
            cnt = 0;

            for (int j=0;j<n;j++)
            {
                if (arr[j]==q2)
                {
                    cnt += 1;
                    cout << j+1;
                    break;
                }
            }
            if (cnt == 0)
            {
                cout << 0;
            }
            cout << endl;
        }
        else if (q1==3)
        {
            cin >> q2 >> q3;

            for (int k=q2-1;k<q3;k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}