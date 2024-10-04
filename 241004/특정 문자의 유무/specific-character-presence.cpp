#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool exists1 = false;
    bool exists2 = false;

    if (str.find("ee") != string::npos)
    {
        exists1 = true;
    }

    if (str.find("ab") != string::npos)
    {
        exists2 = true;
    }

    if (exists1 == true)
    {
        cout << "Yes" << " ";
    }
    else
    {
        cout << "No" << " ";
    }

    if (exists2 == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    
    return 0;

}