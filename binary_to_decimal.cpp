#include <iostream> 

using namespace std;

int main() {

    int n;
    cin >> n;
    int ans = 0, digit;
    int twos = 1;
    while(n!=0) {
        digit = n%10;
        if(digit==1)
            ans = twos * digit + ans;
        twos = twos * 2;
        n = n/10;
    }
    cout << ans;
    return 0;
}