#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration Queue name as "que"
    queue<int> que;

    // que = {1, 2}; Not assign value this type

    // Add vlaue
    que.push(1);
    que.push(2);

    que.emplace(3);

    cout << "Front value: " << que.front() << endl;

    // Remove value
    que.pop();
    cout << "After pop, front value: " << que.front() << endl;
    return 0;
}