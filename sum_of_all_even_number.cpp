#include <bits/stdc++.h>

using namespace std;

int main() {
    int i=2,n,sum=0;
    cin >> n;
    while(i<=n) {
        
        sum += i;
        i+=2;
    }
    cout << sum << endl;
    return 0;
}