#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
public:
    Student(string n, int r) {
        name = n;
        rollNumber = r;
        cout << "Constructor called for " << name << endl;
    }
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};
int main() {
    Student s1("Rohit Kumar Maurya", 101);
    s1.display();
    return 0;
}
