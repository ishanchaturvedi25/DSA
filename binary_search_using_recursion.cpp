#include <bits/stdc++.h> 

using namespace std;

bool search(int a[],int s,int e,int k) {
    if(s<=e) {
        int mid=s+(e-s)/2;
        if(a[mid]==k)
            return true;
        if(a[mid]>k)
            return search(a,s,mid-1,k);
        else
            return search(a,mid+1,e,k);
    }
    return false;

    

}

int main() {

    int n;
    cin >> n;

    int a[1000];
    for(int i=0;i<n;i++)
        cin >> a[i];

    int k;
    cin >> k;

    if(search(a,0,n-1,k))
        cout << "Present";
    else
        cout << "Not Present";

    return 0;
}