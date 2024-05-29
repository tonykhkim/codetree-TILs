#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    
    int arr[n];
    int cnt_arr[9] = {};

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for (int j=0;j<n;j++)
    {
        cnt_arr[arr[j]-1]++;
    }
    for (int k=0;k<=8;k++)
    {
        cout << cnt_arr[k] << endl;
    }
    return 0;
}