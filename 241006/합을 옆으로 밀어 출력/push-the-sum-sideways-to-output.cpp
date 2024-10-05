#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    string str;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        //cout << num << endl;
        sum += num;
        //cout << sum << endl;
    }
    str = to_string(sum);
    int len = str.length();
    // << str << endl;
    str = str.substr(1,len-1) + str.substr(0,1);
    cout << str;
    return 0;

}