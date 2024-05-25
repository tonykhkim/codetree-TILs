#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double sum = 0.0;
    int cnt = 0;
    double val,mean;

    for (int i=1;i<=n;i++)
    {
        cin >> val;

        sum += val;

        cnt += 1;
    }
    mean = sum/cnt;

    cout <<fixed;
    cout.precision(1);
    cout << mean << endl;

    if (mean>=4.0)
    {
        cout << "Perfect";
    }
    else if (mean>=3.0 && mean < 4.0)
    {
        cout << "Good";
    }
    else
    {
        cout << "Poor";
    }
    return 0;


}