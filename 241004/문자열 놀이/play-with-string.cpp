#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int q, num;
    char temp, ch1, ch2;
    cin >> s >> q;

    for (int i=0;i<q;i++)
    {
        cin >> num;

        if (num == 1)
        {
            int a, b;
            cin >> a >> b;
            temp = s[a-1];
            s[a-1] = s[b-1];
            s[b-1] = temp;
            cout << s << endl;
        }
        else if (num == 2)
        {
            char a,b;
            cin >> a >> b;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == a)
                {
                    s[j] = b;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}