#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vector
    vector<int> vec = {1, 2, 3, 4, 5};

    // Iterator
    //  vector<int>::iterator it; Don't need to declear iterator this type, if using "auto"

    for (auto value : vec) //auto keyword, automatically determine the vector type
    {
        cout << value << " "; // the "value" is stored copy of the vec element
    }
    cout << endl;

    //Auto keyword, reduce the code complexity, make reliable and clean
    return 0;
}