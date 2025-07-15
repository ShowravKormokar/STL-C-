#include <bits/stdc++.h>
using namespace std;

void print2DVector(vector<vector<int>> vec)
{
    for (auto row : vec)
    {
        for (auto val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Declaration 2D vector
    vector<vector<int>> vec;

    // Assignning values
    vec = {{1, 2}, {3, 4}};

    // Insert value
    vec.push_back({5, 6});

    // Print vector
    cout << "3X2 matrix:\n";
    print2DVector(vec);

    return 0;
}