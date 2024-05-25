#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int count = 0;;
    int sum = 0;

    for (int i=0;i<=9;i++)
    {
        cin >> arr[i];

        if (arr[i]<250)
        {
            count += 1;
            sum += arr[i];
        }
        else
        {
            break;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum/count;

    return 0;

}