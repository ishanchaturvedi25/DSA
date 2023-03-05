#include <bits/stdc++.h>

using namespace std;

int partition(int a[], int s, int e) {

    int pivot = a[s];

    int count = 0;
    for(int i=s+1;i<=e;i++) {
        if(a[i] <= pivot)
            count++;
    }

    int pivotIndex = s+count;
    swap(a[s],a[pivotIndex]);

    int i=s,j=e;
    while(i < pivotIndex && j > pivotIndex) {

        while(a[i] <= pivot)
            i++;

        while(a[j] > pivot)
            j--;  
        if(i < pivotIndex && j > pivotIndex)
            swap(a[i++],a[j--]);
    }
    return pivotIndex;
}

void quickSort(int a[], int s, int e) {

    if(s>=e)
        return;
    
    int p = partition(a,s,e);

    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main() {

    int n;
    cin >> n;

    int a[100];
    for(int i=0;i<n;i++)
        cin >> a[i];

    cout << "Before Sort : " << endl;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;

    quickSort(a,0,n-1);

    cout << "After Sort : " << endl;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}