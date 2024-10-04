#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr;
    cin >> arr;
    //char A[arr.length()];
    int index = 0;

    for (int i=arr.length()-1;i>=0;i--)
    {
        if (i%2==1)
        {
            cout << arr[i];
            //A[index] = arr[i];
            index += 1;
        }
    }
    //cout << A;

    //for (int i=A.length()-1;i>=0;i--)
    //{
    //    cout << A[i];
    //}
    return 0;
}