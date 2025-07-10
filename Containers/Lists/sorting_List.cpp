#include <bits/stdc++.h>
using namespace std;

void printList(const list<int> lst)
{
    for (auto value : lst)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lst = {6, 2, 2, 4, 3, 5};

    // Sort list in ascending order
    lst.sort();
    cout << "Sorting in ascending order: ";
    printList(lst);

    // Reverse list
    lst.reverse();
    cout << "Reverse list: ";
    printList(lst);

    // Remove consecutive duplicates only
    lst.unique();
    cout << "Show only unique element: ";
    printList(lst);

    return 0;
}