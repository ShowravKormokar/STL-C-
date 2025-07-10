#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lst = {1, 2, 3, 4, 5};
    list<int> lst2 = {6, 7, 8, 9, 10};

    // Merge list or concatanation
    lst.merge(lst2);

    for (auto val : lst)
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}