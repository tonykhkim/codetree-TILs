#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    
    int num = (int)a + 1;

    if (num == 123)
    {
        num = 97;
    }

    cout << (char)num;
    return 0;
}