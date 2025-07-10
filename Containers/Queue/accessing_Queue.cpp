#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> que;

    // Assigning values
    que.push(1);
    que.push(2);
    que.push(3);

    // Accessing element from Front
    cout << "Accessing from front value: " << que.front() << endl;

    // Accessing element from back
    cout << "Accessing from back value: " << que.back() << endl;

    return 0;
}