#include <bits/stdc++.h>

using namespace std;

int main() {

    queue<int> q;

    q.push(1);
    cout << "Front : " << q.front() << endl;

    q.push(2);
    cout << "Front : " << q.front() << endl;

    q.push(3);
    cout << "Front : " << q.front() << endl;

    cout << "size of queue is : " << q.size() << endl;

    q.pop();

    cout << "size of queue is : " << q.size() << endl;

    if(q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    return 0;
}