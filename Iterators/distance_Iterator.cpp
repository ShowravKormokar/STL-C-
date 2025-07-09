#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    // It specially used to determine the distance at a given range
    auto first = vec.begin();
    auto last = vec.end()-2;

    cout << "The distance is: " << distance(first, last) << endl;
    return 0;
}