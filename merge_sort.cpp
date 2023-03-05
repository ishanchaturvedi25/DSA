#include <iostream> 

using namespace std;

void merge(int *a, int s, int e) {

    int mid = s+(e-s)/2;

    int l1 = mid-s+1;
    int l2 = e-mid;

    int *first = new int[l1];
    int *second = new int[l2];

    for(int i=0;i<l1;i++)
        first[i] = a[s+i];

    for(int i=0;i<l2;i++)
        second[i] = a[mid+1+i];

    int i=0,j=0;
    int k=s;
    while(i<l1 && j<l2) {
        if(first[i] < second[j])
            a[k++] = first[i++];
        else
            a[k++] = second[j++];
    }

    while(i<l1)
        a[k++] = first[i++];
    
    while(j<l2)
        a[k++] = second[j++];

}

void mergeSort(int a[],int s,int e) {

    if(s>=e)
        return;
    
    int mid = s+(e-s)/2;

    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    merge(a,s,e);
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

    mergeSort(a,0,n-1);
    
    cout << "After Sort : ";
    for(int i=0;i<n;i++)
        cout << a[i];
    cout << endl;
    
    return 0;
}