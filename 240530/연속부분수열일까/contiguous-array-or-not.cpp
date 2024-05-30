#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cin >> n1 >> n2;

    int A[n1];
    int B[n2];
    int cnt = 0;

    for (int i=0;i<n1;i++)
    {
        cin >> A[i];
    }

    for (int j=0;j<n2;j++)
    {
        cin >> B[j];
    }

    for (int i=0;i<=n1-n2;i++)
    {
        for (int j=0;j<n2;j++)
        {
            if (A[i+j]==B[j])
            {
                cnt += 1;
            }
            else
            {
                cnt -= 1;
            }
        }
    }

    if (cnt == n2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}