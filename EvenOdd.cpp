#include <iostream> 

using namespace std;

bool check(int n) {
    if(n % 2 == 0)
        return true;
    return false;
}

int main() {

    int n;
    cin >> n;

    if(check(n))
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}