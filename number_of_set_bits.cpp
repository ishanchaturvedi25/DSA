#include <iostream> 

using namespace std;

int setBits(int a , int b) {

    int count = 0;

    while(a!=0) {
        int digit = a & 1;
        if(digit == 1)
            count++;
        a = a >> 1;
    }

    while(b!=0) {
        int digit = b & 1;
        if(digit == 1)
            count++;
        b = b >> 1;
    }

    return count;
}

int main() {

    int a , b;
    cin >> a >> b;

    cout << "Number of set bits : " << setBits(a , b);

    return 0;
}