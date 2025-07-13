#include <bits/stdc++.h>
using namespace std;

void printSet(set<int> st)
{
    // Set can support all iterator operations like rbegin(), cend() etc.
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    set<int> st = {1, 2, 3, 4, 5};

    // Remove value by erase(val)
    st.erase(3);
    cout << "Remove by value: ";
    printSet(st);

    // Remove value by erase(it) [Iterator]
    auto it = st.begin();
    st.erase(it);
    cout << "Remove by iterator: ";
    printSet(st);

    // Clear set
    st.clear();

    // Check the set is empty or not
    cout << "Is set empty? : " << ((st.empty()) ? "Yes" : "No") << endl;

    return 0;
}