#include <bits/stdc++.h>
using namespace std;

void printVec(vector<char> vec)
{
    // Print vector value using for each loop
    for (int i = 0; i < vec.size() - 1; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<char> vec;
    vec = {'s', 'h', 'o', 'w', 'r', 'a', 'v'};

    // Resize the vector
    cout << "Vector size: " << vec.size() << endl;   // Size 7
    vec.resize(10);                                  // Specify the size
    cout << "Vector resize: " << vec.size() << endl; // After resize(n), size 10

    // Swap vector
    vector<char> vec2;
    vec2 = {'m', 'a', 's', 'u', 'm', 'a'};

    vec.swap(vec2); // Swap between vec and vec2
    cout << "After swap between vec and vec2, vec2 elements: ";
    printVec(vec2);

    return 0;
}