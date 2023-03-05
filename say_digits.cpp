#include <bits/stdc++.h>

using namespace std;

void say_digits(int n) {

    if(n==0)
        return;
    say_digits(n/10);
    switch (n%10)
    {
    case 1:
        cout << "One ";
        break;
    case 2:
        cout << "Two ";
        break;
    case 3:
        cout << "Three ";
        break;
    case 4:
        cout << "Four ";
        break;
    case 5:
        cout << "Five ";
        break;
    case 6:
        cout << "Six ";
        break;
    case 7:
        cout << "Seven ";
        break;
    case 8:
        cout << "Eight ";
        break;
    case 9:
        cout << "Nine ";
        break;
    case 10:
        cout << "Ten ";
        break;
    }
}

int main() {

    int n;
    cin >> n;

    say_digits(n);
    
    return 0;
}