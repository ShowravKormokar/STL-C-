#include <bits/stdc++.h>
using namespace std;

void printDeque(const deque<int> dqe)
{
    for (auto value : dqe)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> dqe = {0, 1, 2, 3, 4, 5};
    cout << "Deque elements: ";
    printDeque(dqe);

    // Remove element from front
    dqe.pop_front();
    cout << "Remove element from front: ";
    printDeque(dqe);

    // Remove element from front
    dqe.pop_back();
    cout << "Remove element from back: ";
    printDeque(dqe);

    // Remove element at specific position (iterator)
    auto it = dqe.begin();
    advance(it, 2);
    dqe.erase(it);
    cout << "Remove element at specific position: ";
    printDeque(dqe);

    // Remove all elements or clear deque
    dqe.clear();

    // Check deque empty or not
    cout << "Is deque empty? : " << ((dqe.empty() == 1) ? "Yes" : "No") << endl;

    return 0;
}