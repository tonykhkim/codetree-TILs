#include <iostream>
using namespace std;

int main()
{
    char arr[10];

    for (int i=0;i<=9;i++)
    {
        cin >> arr[i];
    }

    for (int j=1;j<=7;j+=3)
    {
        cout << arr[j] << " ";
    }

    return 0;
}