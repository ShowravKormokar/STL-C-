#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dqe = {1, 2, 3, 5, 4};

    dqe.begin();
    dqe.end();

    cout << "Using at(): " << dqe.at(2) << endl;

    cout << "Access array like: " << dqe[4] << endl;
    return 0;
}