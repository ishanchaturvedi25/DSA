#include <iostream> 

using namespace std;

void reverse(int a[] , int n) {

    int i = 0 , j = n-1;

    while(i<j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

}

int main() {

    int n;
    cin >> n;

    int a[100];
    for(int i=0;i<n;i++)
        cin >> a[i];

    cout << "Entered Array : " << endl;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;

    reverse(a,n);

    cout << "Reversed Array : " << endl;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";

    return 0;
}