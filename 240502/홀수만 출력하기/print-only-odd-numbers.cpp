#include <iostream>

using namespace std;

int main()
{
    int N,a;

    cin >> N;

    for (int i=1;i<=N;i++)
    {
        cin >> a;

        if (a%2==1 && a%3==0)
        {
            cout << a << endl;
        }
    }
    return 0;
}