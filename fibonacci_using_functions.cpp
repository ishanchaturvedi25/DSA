#include <iostream> 

using namespace std;

int nth_term(int n) {
    
    int n1 = 0 , n2 = 1;
    for(int i=3; i<=n ; i++) {
        int temp = n1+n2;
        n1 = n2;
        n2 = temp;
    }
    return n2;
}

int main() {

    int n;
    cin >> n;

    cout << "nth term is : " << nth_term(n);

    return 0;
}