#include <iostream>
using namespace std;

int main(){
    int a,b,r;    //q는 몫, r은 나머지
    cin >> a >> b;

    cout << a/b << ".";
    r = a%b;
    for (int i=1;i<=20;i++){
        
        r = r*10;
        cout << r/b;
        r = r%b;
        
    }


    return 0;
}