#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st = {1, 2, 3, 4, 5};

    // Find value by using find(val). Note: Find return not integer value, return iterator
    int findVal = 3;
    cout << "Is value exist? : " << ((st.find(findVal) != st.end()) ? "Yes" : "No") << endl;

    // Count value
    cout << "Is value exist? : " << ((st.count(4)) ? "Yes" : "No") << endl;

    // Determine total number of elements
    cout << "Number of elements: " << st.size() << endl;

    return 0;
}