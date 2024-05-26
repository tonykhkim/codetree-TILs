#include <iostream>
using namespace std;

int main()
{
    int n;
    int cnt = 0;
    cin >> n;

    cout << fixed;
    cout.precision(2);

    for (int i=1;i<=n;i++)
    {
        int sum = 0;
        int arr[4];

        for (int j=0;j<4;j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        
        if (sum/4 >= 60)
        {
            cout << "pass" << endl;
            cnt += 1;
        }
        else
        {
            cout << "fail" << endl;
        }
    }
    cout << cnt;
    return 0;
}