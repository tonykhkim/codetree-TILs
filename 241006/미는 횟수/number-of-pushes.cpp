#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A,B;
    cin >> A;
    cin >> B;
    int i = 0;
    int count = 0;
    bool flag = false;
    int len = A.length();

    for (i; i < len; i++)
    {
        A = A.substr(1,len-1) + A.substr(0,1);

        count += 1;
        
        if (A == B)
        {
            flag = true;
            break;
        }
    }
    
    if (flag)
    {
        cout << count;
    }
    else
    {
        cout << -1;
    }
    

    return 0;
}