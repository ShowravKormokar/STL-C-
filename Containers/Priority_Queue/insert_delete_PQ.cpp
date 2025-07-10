#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration Priority queue
    priority_queue<int> pq;

    // Assignning value
    pq.push(10);
    pq.push(20);
    pq.emplace(30);

    // Note: When push values into it, they are sorted so that pq.top() always returns the largest value.

    cout << "Top value: " << pq.top() << endl; // Leargest value high priority, so print 30

    // Remove value
    pq.pop();
    cout << "After pop, top value: " << pq.top() << endl;

    return 0;
}