#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> vec2 = {6, 7, 8, 9, 10};

    copy(vec2.begin(), vec2.end(), back_inserter(vec)); // copy vec2 to vec but add last on the vec using back_inserter()

    for (auto value : vec)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}