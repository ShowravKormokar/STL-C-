#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vector
    vector<char> vec = {'D', 'A', 'T', 'A', ' ', 'S', 'T', 'R', 'U', 'C', 'T', 'U', 'R', 'E', ' ', '&', ' ', 'A', 'L', 'G', 'O', 'R', 'I', 'T', 'H', 'M'};

    // Iterator
    vector<int>::iterator it;
    // rbegin() means reverse begin, rend() means reverse end
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *it; // print last to first
    }
    cout << endl;

    return 0;
}