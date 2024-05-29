#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int cnt_arr[6]={};

    for (int i=0;i<10;i++)
    {
        cin >> arr[i];
    }
    for (int j=0;j<10;j++)
    {
        cnt_arr[arr[j]-1]++;
    }

    for (int k=0;k<6;k++)
    {
        cout << k+1 << " - " << cnt_arr[k] << endl;
    }
    return 0;
}