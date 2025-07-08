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
    vector<int> vec;                                      // Declaration vector as name "vec", type integer
    cout << "Size when no value: " << vec.size() << endl; // Initially vector size '0', It's automatically increase or decrease his size based on need on runtime

    // Initialize value
    vec = {1, 2};
    vec.push_back(3); // Add 3 at last, 1 2 3

    cout << "Size: " << vec.size() << endl;         // Means no. of value stored
    cout << "Capacity: " << vec.capacity() << endl; // Means able to number of values are stored, this is increase 2 multiplication such like 2, 4, 8, ...

    // Print vector
    printVec(vec); // User defined printing function

    // Remove last element
    vec.pop_back(); // Remove 3 at the end
    printVec(vec);  // Print to see the

    // Print element at specific index using at() function
    cout << "Value at index 0: " << vec.at(0) << endl;
    printVec(vec);

    // Print First and Last element
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;

    return 0;
}