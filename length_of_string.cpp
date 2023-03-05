#include <iostream>

using namespace std;

int main() {
    char name[20];

    cin >> name;

    int i=0;
    for(i=0;name[i]!='\0';i++);

    cout << i;
    return 0;
}