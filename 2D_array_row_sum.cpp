#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a[3][4];

    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) 
            cin >> a[i][j];
    }

    int max=INT_MIN;
    for(int i=0;i<3;i++) {
        int sum=0;
        for(int j=0;j<4;j++) 
            sum+=a[i][j];
        cout << "Sum of row " << i << " is : " << sum << endl;
        if(max<sum)
            max=i;
    }

    cout << "Max sum is of row : " << max << endl;
    
    return 0;
}