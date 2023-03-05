#include <iostream> 

using namespace std;

int nth_term(int n) {
    return (3 * n + 7);
}

int main() {

    int n;
    cin >> n;

    cout << n << "th term is : " << nth_term(n);

    return 0;
}