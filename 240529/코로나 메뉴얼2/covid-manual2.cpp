#include <iostream>

using namespace std;

int main()
{
    int arr_cnt[4]={};
    int temp[3];
    char sym[3];

    for (int i=0;i<3;i++)
    {
        cin >> sym[i] >> temp[i];
    }

    for (int i=0;i<3;i++)
    {
        if (sym[i]=='Y' && temp[i]>=37)
        {
            arr_cnt[0]++;
        }
        else if (sym[i]=='N' && temp[i]>=37)
        {
            arr_cnt[1]++;
        }
        else if (sym[i]=='Y' && temp[i]<37)
        {
            arr_cnt[2]++;
        }
        else if (sym[i]=='N' && temp[i]<37)
        {
            arr_cnt[3]++;
        }
    }

    for (int j=0;j<4;j++)
    {
        cout << arr_cnt[j] << " ";
    }

    if (arr_cnt[0]>=2)
    {
        cout << 'E';
    }
    return 0;
}