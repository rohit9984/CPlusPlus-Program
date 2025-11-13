#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    double add(double a, double b) {
        return a + b;
    }
};
int main() {
    Calculator calc;
    cout << "Sum of two integers (10 + 20): " << calc.add(10, 20) << endl;
    cout << "Sum of three integers (5 + 10 + 15): " << calc.add(5, 10, 15) << endl;
    cout << "Sum of two doubles (2.5 + 3.7): " << calc.add(2.5, 3.7) << endl;
    return 0;
}
