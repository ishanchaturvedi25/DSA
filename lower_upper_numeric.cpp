#include <bits/stdc++.h>

using namespace std;

int main() {
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    if(ch >= 97 && ch <= 122)
        cout << "This is a lower case";
    else if(ch >= 65 && ch <= 90)
        cout << "This is a upper case";
    else if(ch >= 48 && ch <= 57)
        cout << "This is a numeric";
    return 0;
}