#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int sum = 0;
    cin >> a >> b;

    int cnt_arr[b-1]={};

    while(a>1)
    {
        cnt_arr[a % b]++;
        a = a / b;
    }

    for (int i=0;i<4;i++)
    {
        sum += cnt_arr[i]*cnt_arr[i];
    }

    cout << sum;
}