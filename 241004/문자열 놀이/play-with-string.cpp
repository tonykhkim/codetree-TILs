#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int q, num, a, b;
    char temp, ch1, ch2;
    cin >> s >> q;

    for (int i=0;i<q;i++)
    {
        cin >> num >> a >> b;

        if (num == 1)
        {
            temp = s[a-1];
            s[a-1] = s[b-1];
            s[b-1] = temp;
            cout << s << endl;
        }
        else if (num == 2)
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == s[a])
                {
                    s[j] = s[b];
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}