#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);

    // Size of priority queue
    cout << "Size: " << pq.size() << endl;

    // Make PQ 2
    priority_queue<int> pq2;
    pq2.push(40);
    pq2.push(50);
    pq2.push(60);

    // Swap PQ
    pq.swap(pq2);
    cout << "PQ 1, top value: " << pq.top() << endl;
    cout << "PQ 2, top value: " << pq2.top() << endl;

    // Check PQ is empty or not
    cout << "Is priority queue empty? : " << ((pq.empty()) ? "Yes" : "No") << endl;

    return 0;
}