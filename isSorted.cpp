#include <bits/stdc++.h> 

using namespace std;

bool isSorted(int a[],int n) {

    if(n==0 || n==1)
        return true;
    
    if(a[0]>a[1])
        return false;
    
    return isSorted(a+1,n-1);

}

int main() {
    
    int n;
    cin >> n;

    int a[1000];
    for(int i=0;i<n;i++)
        cin >> a[i];

    if(isSorted(a,n))
        cout << "sorted";
    else
        cout << "not sorted";
    
    return 0;
}