#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration Stack name as "stk"
    stack<int> stk;

    // Assign values in this type is invalid
    // stk = {1, 2, 3, 4, 5};

    // Add value at top
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.emplace(4);

    // Access values at top
    cout << "Top value: " << stk.top() << endl;

    // Remove value
    stk.pop(); // Remove top value, 3
    cout << "After pop, top value: " << stk.top() << endl;

    return 0;
}