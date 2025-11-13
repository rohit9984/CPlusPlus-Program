#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        cout << "The number is positive." << endl;
    } 
    else if (num < 0) {
        cout << "The number is negative." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    }
    cout << "\nUsing for loop: Counting from 1 to 5" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n\nUsing while loop: Counting down from 5 to 1" << endl;
    int j = 5;
    while (j >= 1) {
        cout << j << " ";
        j--;
    }
    cout << endl;
    return 0;
}
 