#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len;
    len = str.length();

    int count1 = 0;
    int count2 = 0;

    for (int i = 0;i<len-1;i++)
    {
        if (str[i] == 'e' && str[i+1] == 'e')
        {
            count1 += 1;
        }

        if (str[i] == 'e' && str[i+1] == 'b')
        {
            count2 += 1;
        }
    }

    cout << count1 << " " << count2;

    return 0;
}