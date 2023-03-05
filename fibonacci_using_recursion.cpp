#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n1, int n2, int n) {

    if(n==0)
        return n2;
    
    int t = n1;
    n1 = n2;
    n2 += t;
    return fibonacci(n1,n2,n-1);

}

int main() {
    
    int n;
    cin >> n;

    if(n==0)
        cout << 0;
    else if(n==1)
        cout << 1;
    else
        cout << fibonacci(0,1,n-2);
    
    return 0;
}