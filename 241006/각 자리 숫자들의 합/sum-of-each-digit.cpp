#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string num = to_string(n);

    int len = num.length();
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        //cout << (int)num[i] - 48 << endl;
        sum += (int)num[i] - 48;
    }
    cout << sum;
    return 0;
}