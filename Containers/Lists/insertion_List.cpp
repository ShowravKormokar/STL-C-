#include <bits/stdc++.h>
using namespace std;

void printList(list<int> lst)
{
    for (auto value : lst)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lst;               // Decleration List as name lst
    lst = {2, 2, 2, 3, 1, 0, 7}; // Assign values

    // Insert element at the beginning
    lst.push_front(0);
    cout << "Insert value at begin: ";
    printList(lst); // Print values

    // Insert element at the end
    lst.push_back(7);
    cout << "Insert value at end: ";
    printList(lst);

    // Insert element at specific position (iterator)
    auto it = lst.begin(); // Must use iterator to specify the position
    advance(it, 5);        // Move iterator to the 5 index
    lst.insert(it, 1);     // Insert value 1 to the 5 index
    cout << "Insert value at a specific position: ";
    printList(lst);

    return 0;
}