#include <iostream>
using namespace std;

int main()
{
    char val;
    int error = 'A'-'a';
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin >> val;
            cout << (char)((int)val + error) << " ";
        }
        cout << endl;
    }
    return 0;
}