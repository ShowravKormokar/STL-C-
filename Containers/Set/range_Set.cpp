#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st = {10, 20, 30, 40, 50};

    // Lower bound. Must use iterator
    auto it = st.lower_bound(25);
    cout << "Lower bound <= " << ((it != st.end()) ? *it : -1) << endl;

    // Upper bound
    it = st.upper_bound(35);
    cout << "Upper bound >= " << ((it != st.end()) ? *it : -1) << endl;

    // Equal Range
    int x = 30;
    auto range = st.equal_range(x);

    if (range.first != st.end())
        cout << "equal_range(" << x << ").first: " << *range.first << endl; // range.first: Iterator to element equal to or just greater than x

    if (range.second != st.end())
        cout << "equal_range(" << x << ").second: " << *range.second << endl; // range.second: Iterator to element just greater than x

    return 0;
}