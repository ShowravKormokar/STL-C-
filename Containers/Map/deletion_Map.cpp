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
    map<int, string> m = {{1, "AA"}, {2, "BB"}, {3, "CC"}};

    // Remove element using erase(key)
    m.erase(3); // It count start index at 1 not 0
    printMap(m);

    // Remove element using erase(iterator)
    auto del = m.begin();
    m.erase(del);
    cout << "After deletion: " << endl;
    printMap(m);

    // Clear map
    m.clear();

    // Check the map empty or not
    cout << "Is map empty? : " << ((m.empty()) ? "Yes" : "No") << endl;

    return 0;
}