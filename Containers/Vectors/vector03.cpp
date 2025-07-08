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
    vector<int> vec = {1, 2, 3, 4, 5};

    // Remove/erase value of a first/specific position using erase() function
    vec.erase(vec.begin()); // Erase value 1
    printVec(vec);
    vec.erase(vec.begin() + 2); // Erase value 4
    printVec(vec);
    vec.erase(vec.begin(), vec.begin() + 2); // Erase 0 to 2 range all value, remove 2, 3
    printVec(vec);

    //----------- Note: After erase values it's change only vector size not capacity

    // Add/insert value of a first/specific position using insert() function
    vec.insert(vec.begin(), 1); // Insert 0 index at value 1
    printVec(vec);
    vec.insert(vec.begin() + 1, 2); // Insert 1 index at value 2
    printVec(vec);

    // Clear a vector, it's change vector size not capacity
    vec.clear();
    printVec(vec);
    cout << "Vector size: " << vec.size() << endl;         // Size 0
    cout << "Vector capacity: " << vec.capacity() << endl; // Capacity 5, beacuse declaration time has 5 element

    // Check the vector is empty or not
    cout << "Is empty: " << vec.empty() << endl; // 0 -> false, 1 -> true

    return 0;
}