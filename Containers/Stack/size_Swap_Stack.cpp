#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Stack 1
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);

    // Stack 2
    stack<int> stk2;
    stk2.push(4);
    stk2.push(5);
    stk2.push(6);

    // Swap Stack
    stk.swap(stk2);

    cout << "Stack 1 top value: " << stk.top() << endl;
    cout << "Stack 2 top value: " << stk2.top() << endl;

    // Stack Size
    cout << "Stack 1 size: " << stk.size() << endl;

    // Check the stack is empty or not
    cout << "Is stack 1 is empty? : " << ((stk.empty()) ? "Yes" : "No") << endl;

    return 0;
}