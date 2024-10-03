#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr[10] = {};
    char alpha;
    int count = 0;

    for (int i = 0; i< 10; i++)
    {
        cin >> arr[i];
    }
    cin >> alpha;

    for (int j = 0; j < 10; j++)
    {
        if (arr[j][arr[j].length()-1] == alpha)
        {
            count += 1;
            cout << arr[j] << endl;
        }

    }

    if (count == 0)
    {
        cout << "None";
    }
    return 0;
}