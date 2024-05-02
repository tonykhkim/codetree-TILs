#include <iostream>

using namespace std;

int main()
{
    int c_cnt = 0;  // class 
    int h_cnt = 0;  // hall way
    int r_cnt = 0;  // rest room

    int n;
    cin >> n;

    for (int i = 0;i<n;i++)
    {
        if (i%12==11)
        {
            r_cnt += 1;
        }
        else if (i%6==5)
        {
            h_cnt += 1;
        }
        else if (i%3==2)
        {
            h_cnt += 1;
        }
        else if (i%2==1)
        {
            c_cnt += 1;
        }
        
    }
    cout << c_cnt << ' ' << h_cnt << ' ' << r_cnt;

    return 0;

}