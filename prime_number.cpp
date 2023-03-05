#include <bits/stdc++.h>

using namespace std;

int main() {
    int i=2,n;
    cin >> n;
    while(i<n) {
        if(n%i==0) {
            cout << "Not Prime";
            break;
        }
        i++;
    }
    if(i==n)
        cout << "Prime";
    return 0;
}