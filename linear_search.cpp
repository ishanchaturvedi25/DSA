#include <iostream> 

using namespace std;

bool search(int a[] , int n , int key) {
    for(int i=0;i<n;i++) {
        if(key==a[i])
            return true;
    }
    return false;
}

int main() {

    int n;
    cin >> n;

    int a[100];
    for(int i=0;i<n;i++)
        cin >> a[i];

    cout << "enter the key : " << endl;
    int key;
    cin >> key;

    if(search(a,n,key))
        cout << "Present";
    else
        cout << "ABsent";

    return 0;
}