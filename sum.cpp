#include <bits/stdc++.h> 

using namespace std;

int getSum(int *arr,int size) {
    if(size == 0)
        return 0;
    if(size == 1 )
        return arr[0];
    return arr[0] + getSum(arr+1, size-1);
}

int main() {
    
    int size;
    cin >> size;

    int arr[size];
    for(int i=0;i<size;i++)
        cin >> arr[i];
    int sum = getSum(arr, size);

    cout << "Sum is " << sum << endl;

    return 0;
}