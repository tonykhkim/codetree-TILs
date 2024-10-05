#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A,B,str1,str2;
    cin >> A >> B;

    str1 = A + B;
    str2 = B + A;

    cout << stoi(str1) + stoi(str2);

    return 0;

}