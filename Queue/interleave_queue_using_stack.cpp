#include <bits/stdc++.h>

using namespace std;

int main() {

    queue<int> q;

    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        q.push(val);
    }


    stack<int> s;

    for(int i=0;i<n/2;i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    while(!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    for(int i=0;i<n/2;i++) {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    for(int i=0;i<n/2;i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    while(!s.empty()) {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }


    return 0;
}