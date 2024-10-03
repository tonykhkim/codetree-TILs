#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr;
    cin >> arr;
    int len = arr.length();
    int end = 0;
    cin >> end;

    if (end > len)
    {
        end = len;
    }

    for (int i = len-1;i>=len-end;i--)
    {
        cout << arr[i];
    }
    return 0;
}