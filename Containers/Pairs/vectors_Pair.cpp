#include <bits/stdc++.h>
using namespace std;

void printStudentDetails(const vector<pair<int, string>> stu)
{
    for (auto val : stu)
    {
        cout << "Roll: " << val.first << "\tName: " << val.second << endl;
    }
}

int main()
{
    vector<pair<int, string>> student; // Store multiple pair

    int n;
    cout << "Enter the no. of student: ";
    cin >> n;

    cout << "Enter the student details:" << endl;
    for (int i = 0; i < n; i++)
    {
        int id;
        cin >> id; // Input id

        string name;
        cin >> name; // Input name

        student.push_back({id, name}); // Insert the input values
    }

    // Print student details
    cout << "\nStudent Details: ";
    printStudentDetails(student);

    // Sort by id (Default ascending order)
    cout << "\nAfter sort by roll:" << endl;
    sort(student.begin(), student.end());
    printStudentDetails(student);

    // Sort details by name using custom function
    sort(student.begin(), student.end(), [](pair<int, string> a, pair<int, string> b)
         { return a.second < b.second; }); // This is custom lambda function sort by A-Z

    cout << "\nAfter sort by name:" << endl;
    printStudentDetails(student);

    return 0;
}