#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr = "";
    string temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr += temp;
    }

    for (int i = 0; i < arr.length(); i++)
    {
        cout << arr[i];
        if ((i+1)%5==0 && i>0)
        {
            cout << endl;
        }
    }
    return 0;
}