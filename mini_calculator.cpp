#include <iostream>

using namespace std;

int main() {
    
    int a,b;
    char op;
    cin >> a >> b >> op;

    switch (op)
    {
    case '+':
        cout << a << op << b << ": " << a+b;
        break;

    case '-':
        cout << a << op << b << ": " << a-b;
        break;

    case '*':
        cout << a << op << b << ": " << a*b;
        break;

    case '/':
        cout << a << op << b << ": " << a/b;
        break;

    case '%':
        cout << a << op << b << ": " << a%b;
        break;
    
    default:
        cout << "Please enter a valid operator";
        break;
    }
    
    return 0;
}