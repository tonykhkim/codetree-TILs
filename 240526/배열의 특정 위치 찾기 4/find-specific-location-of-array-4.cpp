#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int cnt = 0;
    int sum = 0;

    for (int i=0;i<=9;i++)
    {
        cin >> arr[i];

        if (arr[i]==0)
        {
            for (int j=i-1;j>=0;j--)
            {
                if (arr[j]%2==0)
                {
                    cnt += 1;
                    sum += arr[j];
                }
            }
            break;
        }
    }
    cout << cnt << ' ' << sum;
    return 0;
}