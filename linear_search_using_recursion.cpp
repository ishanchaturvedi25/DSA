#include <bits/stdc++.h>

using namespace std;

bool search(int a[],int n,int k) {

    if(n==0)
        return false;
    
    if(a[0]==k)
        return true;
    
    return search(a+1,n-1,k);

}

int main() {
    
    int n;
    cin >> n;

    int a[1000];
    for(int i=0;i<n;i++)
        cin >> a[i];

    int k;
    cin >> k;

    if(search(a,n,k))
        cout << "present";
    else
        cout << "not present";
    
    return 0;
}