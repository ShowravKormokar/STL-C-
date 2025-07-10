#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lst = {1, 2, 3, 4, 5};

    // Determine size of list
    cout << "Size of the list: " << lst.size() << endl;

    // Clear list using clear() keyword
    lst.clear();

    // Check the list is empty or not
    cout << "List is empty? :- " << ((lst.empty() == 1) ? "Yes" : "No") << endl;
    
    return 0;
}