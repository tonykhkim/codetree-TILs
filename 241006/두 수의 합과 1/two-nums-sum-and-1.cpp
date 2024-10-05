#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1,num2;
    cin >> num1 >> num2;

    string sum = to_string(num1 + num2);
    int len = sum.length();
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if (sum[i] == '1')
        {
            count ++;
        }
    }
    cout << count;
    return 0;
}