#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> que;

    que.push(1);
    que.push(2);
    que.push(3);

    // Size of Queue
    cout << "Size of queue: " << que.size() << endl;

    // Queue 2
    queue<int> que2;

    que2.push(4);
    que2.push(5);
    que2.push(6);

    // Swap queue
    que.swap(que2);
    cout << "Queue 1 last value: " << que.back() << endl;
    cout << "Queue 2 last value: " << que2.back() << endl;

    // Check queue empty or not
    cout << "Is queue empty? :" << ((que.empty()) ? "Yes" : "No") << endl;

    return 0;
}