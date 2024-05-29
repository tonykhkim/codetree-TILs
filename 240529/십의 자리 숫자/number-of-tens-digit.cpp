#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int cnt_arr[9] = {};

    for (int i=0;i<100;i++)
    {
        cin >> arr[i];

        if (arr[i] == 0)
        {
            for (int j=0;j<i;j++)
            {
                if (arr[j]>=10)
                {
                    cnt_arr[(arr[j])/10-1]++;
                }
            }

            for (int k=0;k<9;k++)
            {
                cout << k+1 << " - " << cnt_arr[k] << endl;
            }
            break;
        }
    }
    return 0;
}