#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int> v2 = {10, 20, 30};

    auto it = vec.begin(); // Get iterator to the beginning of vec; this is where we want to start inserting

    insert_iterator<vector<int>> insert_it(vec, it);
    // Create an insert_iterator that inserts into 'vec' starting at the position 'it' (beginning)
    //    As we assign values to *insert_it, it will automatically insert them at 'it' and shift 'it' forward

    for (int val : v2) // Loop through all elements in vector v2
    {
        *insert_it = val;
        // Dereference insert_it and assign val → inserts 'val' at current position in 'vec'

        ++insert_it;
        // Move the insert position forward so the next value doesn't overwrite the previous one
    }

    for (int val : vec)
    {
        cout << val << " ";
    }
    return 0;
}