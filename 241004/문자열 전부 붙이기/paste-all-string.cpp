#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;

    string arr[n] = {};

    for (int i = 0; i<n;i++)
    {
        cin >> str;
        arr[i] = str;
    }

    for (int i = 0; i<n;i++)
    {
        cout << arr[i];
    }
    return 0;

}