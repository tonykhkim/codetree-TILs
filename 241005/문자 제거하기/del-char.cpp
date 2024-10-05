#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int num,len;
    while (true)
    {
        cin >> num;
        len = str.length();
        cout << "num : " << num << endl;
        cout << "len : " << len << endl;

        if (len == 1)
        {
            break;
        }
 
        if (num > len)
        {
            str.erase(len-1,1);
        }
        else
        {
            str.erase(num,1);
        }

        cout << str << endl;
    }   
    return 0;
}