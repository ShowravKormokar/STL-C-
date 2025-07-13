#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m = {{10, "AA"}, {20, "BB"}, {30, "CC"}};

    // Lower bound
    auto lb = m.lower_bound(2);
    cout << "Lower bound <= " << ((lb != m.end()) ? lb->first : -1) << endl;
    // Upper bound
    lb = m.upper_bound(12);
    cout << "Upper bound >= " << ((lb != m.end()) ? lb->first : -1) << endl;

    // Equal range
    int x = 20;
    auto range = m.equal_range(x);

    if (range.first != m.end())
    {
        cout << "equal_range(" << x << ").first: Key = " << range.first->first
             << ", Value = " << range.first->second << endl;
    }
    else
    {
        cout << "No element ≥ " << x << " found.\n";
    }

    if (range.second != m.end())
    {
        cout << "equal_range(" << x << ").second (upper_bound): Key = " << range.second->first
             << ", Value = " << range.second->second << endl;
    }
    else
    {
        cout << "No element > " << x << " found.\n";
    }
    return 0;
}