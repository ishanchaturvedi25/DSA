#include <iostream> 

using namespace std;

int binary_search(int a[] , int n , int key) {
    int s = 0 , e = n-1;
    while(s<=e) {
        int mid = s+ (e-s)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid] < key)
            s = mid+1;
        else
            e = mid-1;
    }
    return -1;
}

int main() {

    int n;
    cin >> n;

    int a[100];
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    int key;
    cout << "Enter the key element : " ;
    cin >> key;

    int rv = binary_search(a,n,key);
    if(rv==-1)
        cout << "Element is not present in the array";
    else
        cout << "Element is present at index : " << rv;


    return 0;
}