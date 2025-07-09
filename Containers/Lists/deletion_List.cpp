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
    list<int> lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Remove elemrnt at the begin
    lst.pop_front();
    cout << "Pop element from begin: ";
    printList(lst);

    // Remove elemrnt at the begin
    lst.pop_back();
    cout << "Pop element from end: ";
    printList(lst);

    // Remove element at iterator position
    auto it = lst.begin();
    advance(it, 1);
    cout << "Pop element at specific position: ";
    lst.erase(it); // element 3 is remove
    printList(lst);

    // Remove all occurrences of val
    lst.remove(5); // Element 5 remove
    cout << "Pop element directly at specific value: ";
    printList(lst);

    return 0;
}