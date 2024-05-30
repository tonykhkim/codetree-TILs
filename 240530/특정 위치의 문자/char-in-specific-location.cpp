#include <iostream>

using namespace std;

int main()
{
    int arr[6]={'L','E','B','R','O','S'};

    int index = -1;

    for (int i=0;i<6;i++)
    {
        if (arr[i]=='L')
        {
            index = i;
        }
    }

    if (index==-1)
    {
        cout << "None";
    }
    else
    {
        cout << index;
    }

    return 0;
}