#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    int i=1,c=1;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout << c;
            j++;
            c++;
        }
        cout << endl;
        i++;
    }

    return 0;
}