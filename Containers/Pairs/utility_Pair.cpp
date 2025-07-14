#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p = {77, "Showrav"};

    pair<int, string> p2 = {10, "Tom"};

    // Swapping pair
    swap(p, p2);
    cout << "After swap pair1: " << p.second << endl;
    cout << "After swap pair2: " << p2.second << endl;

    // Unpack a pair into two variables
    int id;
    string name;
    tie(id, name) = p;
    cout << "Pair1 unpacked->\nID: " << id << "\tName: " << name << endl;

    // Destructure directly (structured bindings)
    // auto [x, y] = p2;  If you're using C++14 or earlier, structured bindings won’t work.

    return 0;
}