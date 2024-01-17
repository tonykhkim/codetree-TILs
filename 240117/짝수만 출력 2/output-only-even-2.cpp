#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> b >> a;
    if (b%2==0){
        while (a<=b){
            cout << b << " ";
            b-=2;
        }
    }
    else {
        b--;
        while (a<=b){
            cout << b << " ";
            b -= 2;
        }
    }
    return 0;
}