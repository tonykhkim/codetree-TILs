#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char alpha;
    getline(cin, str);
    cin >> alpha;
    int count = 0;

    for (int i=0;i<str.length();i++)
    {
        if (str[i] == alpha)
        {
            count += 1;
        }
    }
    cout << count;
    return 0;
}