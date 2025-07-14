#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration pair name as p (same like map , key value pair)
    pair<int, string> p; // int: type1, string: type2

    // Uniform initialization
    pair<int, string> p2 = {10, "Ten"};

    // Assignning values using make_pair(key, value)
    p = make_pair(1, "AA");

    // Access values
    cout << "Pair1: " << p.first << " " << p.second << endl;

    return 0;
}