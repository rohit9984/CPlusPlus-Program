#include <iostream>
using namespace std;
class Student
{
private:
    int rollNumber;

protected:
    string course;

public:
    string name;
    void setDetails(string n, int r, string c)
    {
        name = n;
        rollNumber = r;
        course = c;
    }
    void displayDetails()
    {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};
class Result : public Student
{
public:
    void showCourse()
    {
        cout << "Accessing Protected Member (Course): " << course << endl;
    }
};
int main()
{
    Student s;
    s.setDetails("Rohit Kumar Maurya", 101, "BCA");
    s.displayDetails();
    cout << "\nAccessing Public Member (Name) directly: " << s.name << endl;
    Result r;
    r.setDetails("Amit Sharma", 102, "BCA");
    r.showCourse();
    return 0;
}
