#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollNumber;

public:
    void getDetails()
    {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
    void displayDetails()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};
int main()
{
    Student s1;
    s1.getDetails();
    s1.displayDetails();
    return 0;
}
