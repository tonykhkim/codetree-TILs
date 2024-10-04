#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr;
    cin >> arr;
    int index = 0;

    for (int i=arr.length()-1;i>=0;i--)
    {
        if (i%2==1)
        {
            cout << arr[i];
            index += 1;
        }
    }
    return 0;
}