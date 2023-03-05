#include <iostream> 

using namespace std;

int main() {

    int n;
    cin >> n;

    int a1 = 0 , a2 = 1;
    cout << a1 << " " << a2 << " ";
    for(int i = 0; i < n-2; i++) {
        int temp = a1 + a2;
        a1 = a2;
        a2 = temp;
        cout << a2 << " ";
    }

    
    return 0;
}