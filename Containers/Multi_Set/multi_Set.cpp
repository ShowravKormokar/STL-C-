#include <bits/stdc++.h>
using namespace std;

void printMiltiSet(multiset<int> mls)
{
    for (auto val : mls)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    // Declaration of multi set name as "mls"
    multiset<int> mls;

    // Assignning value
    mls = {1, 2, 3, 3, 4, 5};

    // A multiset is an ordered container like set, but allows duplicate elements.
    // Internally implemented as a self - balancing BST(Red - Black Tree).
    // Elements are always sorted(ascending by default)
    cout << "All elements: ";
    printMiltiSet(mls);

    // Count value
    cout << "No. of 3's: " << mls.count(3) << endl;

    // Find value
    auto find = mls.find(4);
    if (find != mls.end())
        cout << "Find: " << *find << endl;
    else
        cout << "Not found!" << endl;

    mls.erase(3); // Remove all targeted value, same duplicate value also deleted
    cout << "After erase 3, values: ";
    printMiltiSet(mls);

    // -------- Note: All operation same as "Set". ---------------

    return 0;
}