#include <iostream> 

using namespace std;

void swap_alternate(int a[] , int n) {
    for(int i=0;i<n-1;i+=2)
        swap(a[i],a[i+1]);
}

void printArray(int a[] , int n) {

    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {

    int n;
    cin >> n;

    int a[100];
    for(int i=0;i<n;i++)
        cin >> a[i];

    cout << "Entered Array : " << endl;
    printArray(a,n);

    swap_alternate(a , n);

    cout << "Array after swap : " << endl;
    printArray(a,n);

    return 0;
}