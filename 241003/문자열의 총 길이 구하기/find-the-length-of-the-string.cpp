#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr[10] = {};
    int result = 0;

    for (int i=0;i<10;i++)
    {
        cin >> arr[i];
        result += arr[i].length();
    }
    cout << result;
}