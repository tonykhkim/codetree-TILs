#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int sum = 0;
    int cnt = 0;

    for (int i=0;i<=9;i++)
    {
        cin >> arr[i];

        if (arr[i]==0)
        {
            for (int j=i-1;j>=0;j--)
            {
                sum += arr[j];
                cnt += 1;
            }
            break;
        }
        else if (i==9)
        {
            for (int j=i;j>=0;j--)
            {
                sum += arr[j];
                cnt += 1;
            }
            break;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum/cnt;
    return 0;
}