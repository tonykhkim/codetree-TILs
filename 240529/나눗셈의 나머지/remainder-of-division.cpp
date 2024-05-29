#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int sum = 0;
    cin >> a >> b;

    int cnt_arr[b]={};

    while(a>1)
    {
        cnt_arr[a % b]++;
        a = a / b;
    }

    for (int i=0;i<b;i++)
    {
        sum += cnt_arr[i]*cnt_arr[i];
    }

    cout << sum;
}