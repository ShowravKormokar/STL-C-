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
    deque<int> dqe = {1, 2, 3, 4, 5};

    // Determine size
    cout << "Size of deque: " << dqe.size() << endl;

    // Resize deque
    dqe.resize(10);
    cout << "Size of deque: " << dqe.size() << endl;

    // After resize deque (increase), other position fullfil with 0 automatically
    // After resize deque (decrease), remove element that exist out of size

    cout << "After increasing size, deque elements: ";
    printDeque(dqe);

    return 0;
}