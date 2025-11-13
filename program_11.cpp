#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
    }
    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};
int main() {
    Book b;
    Book *ptr = &b;
    ptr->inputDetails();
    ptr->displayDetails();
    return 0;
}
