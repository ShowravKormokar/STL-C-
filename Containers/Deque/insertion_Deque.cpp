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
    // Decleration Deque
    deque<int> dqe;
    // Assign values
    dqe = {1, 2, 3, 4, 5};

    // Add element front
    dqe.push_front(0); // Push 0
    cout << "Add element to the front: ";
    printDeque(dqe);

    // Add element back
    dqe.push_back(6); // Push 6
    cout << "Add element to the back: ";
    printDeque(dqe);

    // Add element at the specific position (Iterator)
    auto it = dqe.begin(); // Define iterator at the beginning position
    advance(it, 4);        // Move iterator 4 postion
    dqe.insert(it, 4);     // Insert 4 at 4 position
    cout << "Add element at specific position: ";
    printDeque(dqe);

    return 0;
}