#include <iostream> 

using namespace std;

void bubbleSort(int a[],int n) {

    if(n==0 || n==1)
        return;

    for(int i=0;i<n-1;i++) {
        if(a[i] > a[i+1])
            swap(a[i],a[i+1]);
    }

    bubbleSort(a,n-1);
}

int main() {

    int n;
    cin >> n;

    int a[100];
    for(int i=0;i<n;i++)
        cin >> a[i];

    cout << "Before Sort : ";
    for(int i=0;i<n;i++)
        cout << a[i];
    cout << endl;

    bubbleSort(a,n);
    
    cout << "After Sort : ";
    for(int i=0;i<n;i++)
        cout << a[i];
    cout << endl;
    
    return 0;
}