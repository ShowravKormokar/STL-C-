#include <bits/stdc++.h>
using namespace std;

void printMultiMap(const multimap<int, string> mm)
{
    for (auto val : mm)
    {
        cout << val.first << " " << val.second << endl;
    }
}

int main()
{
    // Declaration multi map (Same as map, but it contain duplicate values)
    multimap<int, string> mm = {{1, "AA"}, {2, "BB"}, {3, "CC"}};

    mm.insert({2, "BB"}); // Key 2 already exist, but it again accept key with different/same value
    printMultiMap(mm);

    // Access elements same as map, but it doesn't support operator []
    // cout << mm[2].first << endl; Show error: no match for 'operator[]'

    // --------------- Note: It's supports all functions that also uses 'MAP' without operator[]

    return 0;
}