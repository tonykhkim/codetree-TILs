#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    int sum2=0;
    int sum3=0;
    int cnt=0;
    double mean;

    for (int i=0;i<=9;i++)
    {
        cin >> arr[i];
    }
    
    for (int j=1;j<=9;j+=2)
    {
        sum2 += arr[j];
    }
    
    for (int k=2;k<=9;k+=3)
    {
        sum3 += arr[k];
        cnt += 1;
    }
    cout << fixed;
    cout.precision(1);

    cout << sum2 << " " << (double)sum3/cnt;
    return 0;
}