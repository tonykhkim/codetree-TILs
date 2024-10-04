#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A = "";
    string B = "";
    string result1 = "";
    string result2 = "";

    cin >> A;
    cin >> B;

    result1 = A + B;
    result2 = B + A;

    if (result1 == result2)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}