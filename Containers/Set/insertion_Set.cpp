#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration Set
    set<int> st;

    // Assignning value
    st = {1, 2, 3};

    // Insert a new value (only if not present)
    st.insert(4);

    // Constructs and inserts in-place
    st.emplace(5);

    // Print set values
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}