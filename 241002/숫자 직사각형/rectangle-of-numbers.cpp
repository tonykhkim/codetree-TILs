#include <iostream>
using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;
    int num = 1;

    int arr[n][m] = {};

    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = num;
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}