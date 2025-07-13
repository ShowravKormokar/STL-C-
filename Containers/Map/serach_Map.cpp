#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m = {{1, "AA"}, {2, "BB"}, {3, "CC"}};

    // Search value by find(key), return iterator key
    auto findValue = m.find(2);
    if (findValue != m.end())
        cout << "Key: " << findValue->first << " Value: " << findValue->second << " is found.\n";
    else
        cout << "Not found" << endl;

    // search value by count(key), return 1 or 0
    cout << "Find key 3: " << m.count(3) << endl;

    return 0;
}