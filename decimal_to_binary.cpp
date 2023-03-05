#include <iostream> 

using namespace std;

int main() {

    int n;
    cin >> n;
    int ans = 0, digit;
    int tens = 1;
    while(n!=0) {
        digit = n&1;
        ans = digit*tens + ans;
        tens = tens*10;
        n=n>>1;
    }
    cout << ans;
    return 0;
}