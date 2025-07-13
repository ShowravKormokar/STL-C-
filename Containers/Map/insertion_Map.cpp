#include <bits/stdc++.h>
using namespace std;

void printMap(const map<int, string> m)
{
    for (auto val : m)
    {
        cout << "Key: " << val.first << "\tValue: " << val.second << endl;
    }
}

int main()
{
    // Declaration Map name as 'm'
    map<int, string> m; // Key: int, Value: string

    // Assignning values
    m = {{2, "SK"}, {3, "MA"}};

    // Add value using insert({key,value})
    m.insert({4, "SP"});
    cout << "Map elements:" << endl;
    printMap(m);

    // Add value using emplace(key,value)
    m.emplace(5, "KK");
    cout << "After insert:" << endl;
    printMap(m);

    // Add/replace value array like using operator []
    m[4] = "SS";
    cout << "After replace \"4,SP\":" << endl;
    printMap(m);

    return 0;
}