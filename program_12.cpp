#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    try {
        if (num2 == 0) {
            throw runtime_error("Error: Division by zero is not allowed!");
        }
        double result = static_cast<double>(num1) / num2;
        cout << "Result = " << result << endl;
    }
    catch (runtime_error &e) {
        cout << e.what() << endl;
    }
    cout << "Program ended normally." << endl;
    return 0;
}
