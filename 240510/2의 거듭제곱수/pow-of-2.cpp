#include <iostream>
using namespace std;

int main()
{
    int N;
    int i = 0;
    cin >> N;

    while (N != 1)
    {
        N /= 2;
        i += 1;
    }

    cout << i;
    return 0;
}