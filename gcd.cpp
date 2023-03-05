#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a,b;
    cin >> a >> b;

    int m = a*b;

    if(a==0)
        cout << b;
    
    if(b==0)
        cout << a;


    while(a != b) {
        if(a>b)
            a-=b;
        else
            b-=a;
    }

    cout << "GCD : " << a << endl;
    cout << "LCM : " << m/a;

    return 0;
}