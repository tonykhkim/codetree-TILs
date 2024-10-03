#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char alpha;
    cin >> alpha;
    int count = 0;

    for (int i=0;i<5;i++)
    {
        if (arr[i][2] == alpha || arr[i][3] == alpha)
        {
            count += 1;
            cout << arr[i] << endl;
        }
    }
    cout << count;
    return 0;
}