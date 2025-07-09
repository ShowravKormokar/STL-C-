#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vector
    vector<int> vec = {1, 2, 3, 4, 5};

    // Forward traverse Way:01
    cout << "Way 01: ";
    for (auto it = vec.begin(); it != vec.end(); it++) // auto is resolved at compile-time, so there's no runtime overhead.
    {
        cout << *it << " "; // Dereference
    }
    cout << endl;

    // Forward traverse Way:02
    vector<int>::iterator it = vec.begin(); // Requires remembering the exact iterator type

    cout << "Way 02: ";
    for (; it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Forward traverse Way:03
    cout << "Way 03: ";
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}