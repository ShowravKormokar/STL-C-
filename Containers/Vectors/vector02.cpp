#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec)
{
    // Print vector value using for each loop
    cout << "Vector elements: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    // Initialization with specific value on the given range
    vector<int> vec(10, 0); // 0 to 9 position initialization with 0
    printVec(vec);

    // Copy vector
    vector<int> vec2(vec);
    cout << "vector 2 elements after copy from vector 1";
    printVec(vec2);

    return 0;
}