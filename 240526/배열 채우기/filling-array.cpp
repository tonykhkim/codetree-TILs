#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    

    for (int i=0;i<=9;i++)
    {
        cin >> arr[i];

        if (arr[i]==0)
        {
            for (int j=i-1;j>=0;j--)
            {
                cout << arr[j] << " ";
            }
            break;
        }
        else if (i==9)
        {
            for (int j=i;j>=0;j--)
            {
                cout << arr[j] << " ";
            }
            break;
        }
    }
    return 0;
}