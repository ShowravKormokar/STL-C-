#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>::iterator it = vec.begin();

    advance(it, 3); // Move 3 position forward
    cout << *it << endl;

    // That used to iterator position statrt at a specific position

    for (; it != vec.end(); it++)
    {
        cout << *it << " "; // Print elements after 2 position, show 4, 5
    }
    cout << endl;
    return 0;
}