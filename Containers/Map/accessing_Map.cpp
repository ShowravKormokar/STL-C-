#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m = {{1, "AA"}, {2, "BB"}, {3, "CC"}};

    // Access values using operator []
    cout << "The second value is: " << m[2] << endl;

    // Access values using at()
    cout << "The third value is: " << m.at(3) << endl;

    // And print all values by loops or iterators
    for (auto val : m)
    {
        cout << val.first << " " << val.second << endl; // .first: Key, .second: Value
    }

    return 0;
}