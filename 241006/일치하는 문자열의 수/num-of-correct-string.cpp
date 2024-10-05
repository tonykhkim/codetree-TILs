#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; 
    string A, str;
    cin >> n >> A;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if (A == str)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}