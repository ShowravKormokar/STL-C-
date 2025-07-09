#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int>::iterator it;

    // Using cbegin() and cend() doesn't add/modify any value of the vector under iterator, if trying to modify, the compiler show error
    for (auto it = vec.cbegin(); it != vec.cend(); it++)
    {
        cout << *it << " ";
        //*it = 4; Cann't modify
    }
    cout << "\n";

    // To add/modification needed use begin() and end() on the iterator

    return 0;
}