#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1,string2;

    cin >> string1 >> string2;
    
    if (string1.length() < string2.length())
    {
        cout << string2 << " " << string2.length();
    }
    else if (string1.length() > string2.length())
    {
        cout << string1 << " " << string1.length();
    }
    else
    {
        cout << "same";
    }
    return 0;

}