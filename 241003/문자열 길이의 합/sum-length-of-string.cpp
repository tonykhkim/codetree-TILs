#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr;
    int len = 0;
    int count = 0;

    for (int i=0;i<n;i++)
    {
        cin >> arr;
        len += arr.length();
        
        if (arr[0] == 'a')
        {
            count += 1;
        }
    }
    cout << len << " " << count;
    return 0;
}