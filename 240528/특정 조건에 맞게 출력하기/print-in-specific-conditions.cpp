#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    
    for (int i=0;i<100;i++)
    {
        cin >> arr[i];

        if (arr[i]==0)
        {
            for (int j=0;j<=i-1;j++)
            {
                if (arr[j]%2==0)
                {
                    cout << arr[j]/2 << " ";
                }
                else
                {
                    cout << arr[j]+3 << " ";
                }
            }
            break;
        }
    }
    return 0;
}